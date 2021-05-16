package com.example.myapplication.ui.mainFragment

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
import com.example.myapplication.R
import com.example.myapplication.componentsView.BatteryItem
import com.example.myapplication.componentsView.LensItem
import com.example.myapplication.componentsView.LightItem
import com.example.myapplication.componentsView.NestType
import com.example.myapplication.databinding.MainFragmentBinding
import com.example.myapplication.model.electrocomponents.Battery
import com.example.myapplication.model.electrocomponents.Emitter
import com.example.myapplication.model.electrocomponents.LaserSaber
import com.example.myapplication.model.electrocomponents.Lens
import com.example.myapplication.saberUtils.SaberValidator
import com.example.myapplication.schemeerrors.ErrorScheme
import com.example.myapplication.ui.ItemFragment.RESULT_COMPONENT_KEY
import com.unity3d.player.COMMAND_KEY
import com.unity3d.player.UnityPlayerActivity

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
        setHasOptionsMenu(true)

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
                    ErrorScheme.BAD_LENC
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
        clear()
        intent.putExtra(COMMAND_KEY, saberConfig)
        requireActivity().startActivity(intent)
    }
}