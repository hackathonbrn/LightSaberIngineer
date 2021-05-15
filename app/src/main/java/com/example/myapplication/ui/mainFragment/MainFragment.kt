package com.example.myapplication.ui.mainFragment

import android.os.Bundle
import android.util.Log
import android.view.*
import android.widget.SearchView
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
import com.example.myapplication.ui.ItemFragment.RESULT_COMPONENT_KEY

class MainFragment : Fragment() {

    private val viewModel: MainViewModel by viewModels()

    private lateinit var binding: MainFragmentBinding

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
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
        initObserver()
        return binding.root
    }

    private fun initObserver() {
        viewModel.saber.observe(viewLifecycleOwner) {
            Toast.makeText(requireContext(), it.toString(), Toast.LENGTH_LONG).show()

            if (it.battery != null) {
                binding.needBattery.text = it.battery.name
                binding.needBattery.isChecked = true
            }
                else binding.needBattery.text = getString(R.string.battery)

            if (it.emitter != null) {
                binding.needEmitter.text = it.emitter.name
                binding.needEmitter.isChecked = true
            }
                else binding.needEmitter.text = getString(R.string.emitter)

            if (it.lense != null) {
                binding.needLense.text = it.lense.name
                binding.needLense.isChecked = true
            }
                else binding.needLense.text = getString(R.string.lense)

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
        when (item.itemId){
            R.id.clean -> {
                Toast.makeText(requireContext(), "dsv", Toast.LENGTH_LONG).show()
            }
        }
        return super.onOptionsItemSelected(item)
    }
}