package com.example.myapplication.ui.ItemFragment

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.fragment.app.setFragmentResult
import androidx.navigation.fragment.findNavController
import androidx.navigation.fragment.navArgs
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.example.myapplication.R
import org.koin.android.viewmodel.ext.android.viewModel

val RESULT_COMPONENT_KEY = "resultKey"

class ItemFragment : Fragment() {
    private val viewModel: ItemFragmentViewModel by viewModel()
    private val args: ItemFragmentArgs by navArgs()

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val view = inflater.inflate(R.layout.fragment_item_list, container, false)

        if (view is RecyclerView) {
            view.layoutManager = GridLayoutManager(context, 2)
            view.adapter =
                SaberAdapter(viewModel.loadItems(args.nestedType)) { bundle: Bundle ->
                    setFragmentResult(RESULT_COMPONENT_KEY, bundle)
                    findNavController().popBackStack()
                }
        }
        return view
    }
}