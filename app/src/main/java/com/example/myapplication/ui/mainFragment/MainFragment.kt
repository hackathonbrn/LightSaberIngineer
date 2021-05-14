package com.example.myapplication.ui.mainFragment

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.fragment.app.Fragment
import androidx.fragment.app.clearFragmentResultListener
import androidx.fragment.app.setFragmentResultListener
import androidx.fragment.app.viewModels
import androidx.navigation.fragment.findNavController
import com.example.myapplication.componentsView.NestType
import com.example.myapplication.databinding.MainFragmentBinding
import com.example.myapplication.model.Battery
import com.example.myapplication.model.Emmiter
import com.example.myapplication.ui.ItemFragment.RESULT_COMPONENT_KEY

class MainFragment : Fragment() {

    private val viewModel: MainViewModel by viewModels()

    private lateinit var binding: MainFragmentBinding

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        binding = MainFragmentBinding.inflate(inflater)
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
                        emmiter = (bundle.get(NestType.EMITTER.name) as Emmiter)
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
        }
    }

    private fun setResultListener(function: (bundle: Bundle) -> Unit) {
        clearFragmentResultListener(RESULT_COMPONENT_KEY)
        setFragmentResultListener(RESULT_COMPONENT_KEY) { requestKey, mybundle ->
            function.invoke(mybundle)
        }
    }
}