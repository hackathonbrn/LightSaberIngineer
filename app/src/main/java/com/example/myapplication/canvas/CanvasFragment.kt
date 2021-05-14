package com.example.myapplication.canvas

import android.graphics.Color
import android.graphics.PointF
import android.os.Bundle
import android.view.LayoutInflater
import android.view.MotionEvent
import android.view.View
import android.view.ViewGroup
import android.widget.AdapterView
import android.widget.Button
import android.widget.ImageButton
import android.widget.Spinner
import androidx.fragment.app.Fragment
import androidx.fragment.app.viewModels
import androidx.lifecycle.observe
import com.example.myapplication.R
import top.defaults.colorpicker.ColorPickerPopup

class CanvasFragment : Fragment(R.layout.fragment_main) {

    val canvasViewModel: CanvasViewModel by viewModels()

    override fun onCreateView(

        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {


        val root = inflater.inflate(R.layout.fragment_main, container, false)

        val canvasView = root.findViewById<CanvasView>(R.id.canvasView)
        canvasView.setOnTouchListener { v, event ->
            if (event.action == MotionEvent.ACTION_DOWN) {
                canvasViewModel.addPressPoint(PointF(event.x, event.y))
                canvasViewModel.createFigure()
            }
            true
        }
        canvasViewModel.figures.observe(viewLifecycleOwner) {
            canvasView.drawableITems = it?.toMutableList<DrawableItem>() ?: mutableListOf()
            canvasView.invalidate()
        }
        val figureSpinner = root.findViewById<Spinner>(R.id.figures_spinner)
        figureSpinner.setSelection(canvasViewModel.selectedFigure)
        figureSpinner.onItemSelectedListener = object : AdapterView.OnItemSelectedListener {
            override fun onItemSelected(
                parent: AdapterView<*>?,
                view: View?,
                position: Int,
                id: Long
            ) {
                canvasViewModel.selectedFigure = position
            }

            override fun onNothingSelected(parent: AdapterView<*>?) {
            }
        }

        val colorPicker = root.findViewById<ImageButton>(R.id.colorPicker)
        colorPicker.setOnClickListener {
            ColorPickerPopup.Builder(requireContext())
                .initialColor(Color.BLACK) // Set initial color
                .enableBrightness(true) // Enable brightness slider or not
                .enableAlpha(true) // Enable alpha slider or not
                .okTitle("Choose")
                .cancelTitle("Cancel")
                .showIndicator(true)
                .showValue(true)
                .build()
                .show(it, object : ColorPickerPopup.ColorPickerObserver() {
                    override fun onColorPicked(color: Int) {
                        it.setBackgroundColor(color)
                        canvasView.paint.color = color
                    }
                });
        }

        val undoButton = root.findViewById<Button>(R.id.undoButton)
        undoButton.setOnClickListener {
            canvasViewModel.commands.let { if (it.isNotEmpty()) it.last().execute() }
        }

        return root
    }

}