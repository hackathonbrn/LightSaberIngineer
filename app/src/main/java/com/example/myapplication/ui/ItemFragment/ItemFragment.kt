package com.example.myapplication.ui.ItemFragment

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.fragment.app.setFragmentResult
import androidx.fragment.app.viewModels
import androidx.navigation.fragment.findNavController
import androidx.navigation.fragment.navArgs
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.example.myapplication.R

val RESULT_COMPONENT_KEY = "resultKey"

class ItemFragment : Fragment() {
    private val viewModel: ItemFragmentViewModel by viewModels()
    private val args: ItemFragmentArgs by navArgs()

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val view = inflater.inflate(R.layout.fragment_item_list, container, false)

        if (view is RecyclerView) {
            view.layoutManager = LinearLayoutManager(context)
            view.adapter =
                SaberAdapter(viewModel.loadItems(args.nestedType)) { bundle: Bundle ->
                    setFragmentResult(RESULT_COMPONENT_KEY, bundle)
//                    onBack
                    findNavController().popBackStack()
                }
        }
        return view
    }
}