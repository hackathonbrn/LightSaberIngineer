package com.example.myapplication.ui.mainFragment

import android.app.AlertDialog
import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.view.*
import android.widget.Toast
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
import com.example.myapplication.componentsView.LightItem
import com.example.myapplication.componentsView.NestType
import com.example.myapplication.databinding.MainFragmentBinding
import com.example.myapplication.model.electrocomponents.Battery
import com.example.myapplication.model.electrocomponents.Emitter
import com.example.myapplication.model.electrocomponents.LaserSaber
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
        binding.needBattery.text = getString(R.string.battery)
        binding.needEmitter.text = getString(R.string.emitter)
        binding.needLense.text = getString(R.string.lense)
        setHasOptionsMenu(true)

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
    }

    private fun initObservers() {
        initErrorObserver()
        initComponentObserver()
        initobserveNest()
    }

    private fun initobserveNest() {
        viewModel.emitterNestLive.observe(viewLifecycleOwner) {
            if (it != null)
                binding.simpleSchemeView.setImage(it.imageResource, NestType.EMITTER)
        }
        viewModel.batteryNestLive.observe(viewLifecycleOwner) {
            if (it != null)
                binding.simpleSchemeView.setImage(it.imageResource, NestType.BATTERY)
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
            Toast.makeText(requireContext(), it.toString(), Toast.LENGTH_SHORT).show()

            if (it.battery != null) {
                binding.needBattery.text = it.battery.name
                binding.needBattery.isChecked = true
            }

            if (it.emitter != null) {
                binding.needEmitter.text = it.emitter.name
                binding.needEmitter.isChecked = true
            }

            if (it.lense != null) {
                binding.needLense.text = it.lense.name
                binding.needLense.isChecked = true
            }
        }
    }

    private fun setResultListener(function: (bundle: Bundle) -> Unit) {
        clearFragmentResultListener(RESULT_COMPONENT_KEY)
        setFragmentResultListener(RESULT_COMPONENT_KEY) { requestKey, mybundle ->
            function.invoke(mybundle)
        }
    }

    override fun onCreateOptionsMenu(menu: Menu, inflater: MenuInflater) {
        inflater.inflate(R.menu.build_appbar, menu)
        super.onCreateOptionsMenu(menu, inflater)
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        when (item.itemId) {
            R.id.clean -> {
                clear()
            }
            R.id.play -> {
                if (validateLaserSaber()) {
                    val color = (viewModel.emitterNestLive.value?.component as Emitter).color
                    val str = "${color.red},${color.green},${color.blue}"
                    Log.d("COLOR", str)
                    toUnity(str)
                }
            }
        }
        return super.onOptionsItemSelected(item)
    }

    fun clear() {
        binding.needBattery.text = getString(R.string.battery)
        binding.needBattery.isChecked = false
        binding.needEmitter.text = getString(R.string.emitter)
        binding.needEmitter.isChecked = false
        binding.needLense.text = getString(R.string.lense)
        binding.needLense.isChecked = false
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
            } else return true
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