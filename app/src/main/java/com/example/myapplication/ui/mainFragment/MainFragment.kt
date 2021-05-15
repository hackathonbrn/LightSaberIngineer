package com.example.myapplication.ui.mainFragment

import android.app.AlertDialog
import android.content.Intent
import android.os.Bundle
import android.view.*
import android.widget.Toast
import androidx.fragment.app.Fragment
import androidx.fragment.app.clearFragmentResultListener
import androidx.fragment.app.setFragmentResultListener
import androidx.fragment.app.viewModels
import androidx.navigation.fragment.findNavController
import com.example.myapplication.R
import com.example.myapplication.componentsView.NestType
import com.example.myapplication.databinding.MainFragmentBinding
import com.example.myapplication.model.Battery
import com.example.myapplication.model.Emitter
import com.example.myapplication.model.LaserSaber
import com.example.myapplication.saberUtils.SaberValidator
import com.example.myapplication.schemeerrors.ErrorScheme
import com.example.myapplication.ui.ItemFragment.RESULT_COMPONENT_KEY
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
        binding.simpleSchemeView.setOnBatteryClickListener {
            setResultListener() { bundle ->
                viewModel.updateSaber {
                    it.copy(
                        battery = (bundle.get(NestType.BATTERY.name) as Battery)
                    )
                }
            }

            findNavController().navigate(
                MainFragmentDirections.actionMainFragmentToItemFragment(NestType.BATTERY)
            )
        }
        setHasOptionsMenu(true)

        binding.simpleSchemeView.setOnLightClickListener {
            setResultListener() { bundle ->
                viewModel.updateSaber {
                    it.copy(
                        emitter = (bundle.get(NestType.EMITTER.name) as Emitter)
                    )
                }
            }
            findNavController().navigate(
                MainFragmentDirections.actionMainFragmentToItemFragment(NestType.EMITTER)
            )
        }
        initObservers()
        return binding.root
    }

    private fun initObservers() {
        initErrorObserver()
        initComponentObserver()
    }

    private fun initErrorObserver() {
        viewModel.errorsLive.observe(viewLifecycleOwner) {
            if (it != null) {
                AlertDialog.Builder(requireContext())
                    .setPositiveButton(
                        "Ok"
                    ) { dialog, which -> }
                    .setNegativeButton(
                        "Справка"
                    ) { dialog, which ->
                        toManual(it.MANUAL_URL)
                    }
                    .setTitle(it.title)
                    .setMessage(it.description)
                    .create()
                    .show()
            }
        }
    }

    private fun toManual(manualUrl: String?) {
        TODO("To manual webView")
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
                validateLaserSaber()
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

    fun validateLaserSaber() {
        val saber = viewModel.saber.value
        if (!SaberValidator.allComponentsOnPlace(saber))
            viewModel.invokeError(
                ErrorScheme(
                    "Ошибка сборки",
                    "Вы забыли какой-то из элементов!",
                    "здесь ссылка на справку"
                )
            )
    }


    fun toUnity() {
        val intent = Intent(
            requireContext(),
            UnityPlayerActivity::class.java
        )
        requireActivity().startActivity(intent)
    }
}