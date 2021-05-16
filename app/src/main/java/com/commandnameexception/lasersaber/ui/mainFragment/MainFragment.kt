package com.commandnameexception.lasersaber.ui.mainFragment

import android.app.AlertDialog
import android.content.Intent
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.core.graphics.blue
import androidx.core.graphics.green
import androidx.core.graphics.red
import androidx.fragment.app.Fragment
import androidx.fragment.app.clearFragmentResultListener
import androidx.fragment.app.setFragmentResultListener
import androidx.fragment.app.viewModels
import androidx.navigation.fragment.findNavController
import com.commandnameexception.lasersaber.R
import com.commandnameexception.lasersaber.componentsView.BatteryItem
import com.commandnameexception.lasersaber.componentsView.LensItem
import com.commandnameexception.lasersaber.componentsView.LightItem
import com.commandnameexception.lasersaber.componentsView.NestType
import com.commandnameexception.lasersaber.databinding.MainFragmentBinding
import com.commandnameexception.lasersaber.model.electrocomponents.Battery
import com.commandnameexception.lasersaber.model.electrocomponents.Emitter
import com.commandnameexception.lasersaber.model.electrocomponents.LaserSaber
import com.commandnameexception.lasersaber.model.electrocomponents.Lens
import com.commandnameexception.lasersaber.saberUtils.SaberValidator
import com.commandnameexception.lasersaber.schemeerrors.ErrorScheme
import com.commandnameexception.lasersaber.ui.ItemFragment.RESULT_COMPONENT_KEY
import com.unity3d.player.COMMAND_KEY
import com.unity3d.player.UnityPlayerActivity
import org.koin.android.ext.android.bind

class MainFragment : Fragment() {

    private val viewModel: MainViewModel by viewModels()

    private lateinit var binding: MainFragmentBinding

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View {
        binding = MainFragmentBinding.inflate(inflater)
        binding.cleanBut.setOnClickListener {
            clear()
        }
        binding.runBut.setOnClickListener {
            if (validateLaserSaber()) {
                val color = (viewModel.emitterNestLive.value?.component as Emitter).color
                val range = ((viewModel.lensNestLive.value?.component as Lens).range * 100).toInt()
                    .toString()
                val str = "${color.red},${color.green},${color.blue},$range"
                toUnity(str)
            }
        }
        binding.manualBut.setOnClickListener {
            toManual("file:///android_asset/tableOfContent.html")
        }
        initNestListeners()
        initObservers()
        return binding.root
    }

    private fun initNestListeners() {
        binding.simpleSchemeView.setOnBatteryClickListener {
            setResultListener { bundle ->
                val batteryItem = (bundle.get(NestType.BATTERY.name) as BatteryItem)
                viewModel.batteryNestLive.value = batteryItem
                viewModel.updateSaber {
                    it.copy(
                        battery = batteryItem.component as Battery
                    )
                }
            }

            findNavController().navigate(
                MainFragmentDirections.actionMainFragmentToItemFragment(NestType.BATTERY)
            )
        }
        //setHasOptionsMenu(true)

        binding.simpleSchemeView.setOnLightClickListener {
            setResultListener { bundle ->
                val lightItem = (bundle.get(NestType.EMITTER.name) as LightItem)
                viewModel.emitterNestLive.value = lightItem
                viewModel.updateSaber {
                    it.copy(
                        emitter = lightItem.component as Emitter
                    )
                }
            }
            findNavController().navigate(
                MainFragmentDirections.actionMainFragmentToItemFragment(NestType.EMITTER)
            )
        }
        binding.simpleSchemeView.setOnLensClickListener {
            setResultListener { bundle ->
                val lensItem = (bundle.get(NestType.LENCE.name) as LensItem)
                viewModel.lensNestLive.value = lensItem
                viewModel.updateSaber {
                    it.copy(
                        lens = lensItem.component as Lens
                    )
                }
            }
            findNavController().navigate(
                MainFragmentDirections.actionMainFragmentToItemFragment(NestType.LENCE)
            )
        }
    }

    private fun initObservers() {
        initErrorObserver()
        initComponentObserver()
        initObserveNests()
    }

    private fun initObserveNests() {
        viewModel.emitterNestLive.observe(viewLifecycleOwner) {
            if (it != null)
                binding.simpleSchemeView.setImage(it.imageResource, NestType.EMITTER)
        }
        viewModel.batteryNestLive.observe(viewLifecycleOwner) {
            if (it != null)
                binding.simpleSchemeView.setImage(it.imageResource, NestType.BATTERY)
        }
        viewModel.lensNestLive.observe(viewLifecycleOwner) {
            if (it != null)
                binding.simpleSchemeView.setImage(it.imageResource, NestType.LENCE)
        }
    }

    private fun initErrorObserver() {
        viewModel.errorsLive.observe(viewLifecycleOwner) {
            if (it != null) {
                createSupportDialog(it)
            }
        }
    }

    private fun createSupportDialog(it: ErrorScheme) {
        AlertDialog.Builder(requireContext())
            .setPositiveButton(
                "Ok"
            ) { dialog, which ->
                viewModel.errorResolved()
            }
            .setNegativeButton(
                "Справка"
            ) { dialog, which ->
                viewModel.errorResolved()
                toManual(it.MANUAL_URL)
            }
            .setTitle(it.title)
            .setMessage(it.description)
            .create()
            .show()
    }

    private fun toManual(manualUrl: String) {
        findNavController()
            .navigate(
                MainFragmentDirections.actionMainFragmentToWebViewFragment(manualUrl)
            )
    }

    private fun initComponentObserver() {
        viewModel.saber.observe(viewLifecycleOwner) {
            if (it.battery == null) {
                binding.simpleSchemeView.setImage(R.drawable.ic_addwithback, NestType.BATTERY)
            }

            if (it.emitter == null) {
                binding.simpleSchemeView.setImage(R.drawable.ic_addwithback, NestType.EMITTER)
            }

            if (it.lens == null) {
                binding.simpleSchemeView.setImage(R.drawable.ic_addwithback, NestType.LENCE)
            }
        }
    }

    private fun setResultListener(function: (bundle: Bundle) -> Unit) {
        clearFragmentResultListener(RESULT_COMPONENT_KEY)
        setFragmentResultListener(RESULT_COMPONENT_KEY) { requestKey, mybundle ->
            function.invoke(mybundle)
        }
    }

    fun clear() {
        viewModel.updateSaber {
            LaserSaber(null, null, null)
        }
        viewModel.batteryNestLive.value = null
        viewModel.emitterNestLive.value = null
        viewModel.lensNestLive.value = null
    }

    fun validateLaserSaber(): Boolean {
        val saber = viewModel.saber.value
        if (!SaberValidator.allComponentsOnPlace(saber))
            viewModel.invokeError(
                ErrorScheme.BUILD
            ) else {
            if (!SaberValidator.hasEnergyToStart(saber!!)) {
                viewModel.invokeError(
                    ErrorScheme.LOW_BATTERY
                )
                return false
            }

            if (!SaberValidator.chooseLenCorrect(saber!!)) {
                viewModel.invokeError(
                    ErrorScheme.BAD_LENS
                )
                return false
            }

            return true
        }
        return false
    }

    fun toUnity(saberConfig: String?) {
        val intent = Intent(
            requireContext(),
            UnityPlayerActivity::class.java
        )
        intent.putExtra(COMMAND_KEY, saberConfig)
        requireActivity().startActivity(intent)
    }
}