package com.example.myapplication.schemeView

import android.content.Context
import android.util.AttributeSet
import com.example.myapplication.R
import com.example.myapplication.componentsView.NestType
import com.example.myapplication.databinding.SchemeSimpleViewBinding

class SimpleSchemeView(
    context: Context,
    attributeSet: AttributeSet
) : SchemeView(
    context,
    attributeSet
) {
    var binding: SchemeSimpleViewBinding

    init {
        val root = inflate(context, R.layout.scheme_simple_view, this)
        binding = SchemeSimpleViewBinding.bind(root)
    }

    fun setImage(id : Int, nestType: NestType){
        when(nestType){
            NestType.BATTERY -> binding.battery.setImageResource(id)
            NestType.EMITTER -> binding.light.setImageResource(id)
        }
    }

    fun setOnBatteryClickListener(l: OnClickListener) {
        binding.battery.setOnClickListener(l)
    }

    fun setOnLightClickListener(l: OnClickListener) {
        binding.light.setOnClickListener(l)
    }
}