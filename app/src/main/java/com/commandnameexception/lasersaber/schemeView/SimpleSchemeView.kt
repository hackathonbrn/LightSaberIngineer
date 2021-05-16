package com.commandnameexception.lasersaber.schemeView

import android.content.Context
import android.util.AttributeSet
import android.widget.ImageButton
import com.commandnameexception.lasersaber.R
import com.commandnameexception.lasersaber.componentsView.NestType
import com.commandnameexception.lasersaber.databinding.SchemeSimpleViewBinding

class SimpleSchemeView(
    context: Context,
    attributeSet: AttributeSet
) : SchemeView(
    context,
    attributeSet
) {
    var binding: SchemeSimpleViewBinding
    var battery: ImageButton
    var emitter: ImageButton
    var lens: ImageButton

    init {
        val root = inflate(context, R.layout.scheme_simple_view, this)
        binding = SchemeSimpleViewBinding.bind(root)
        battery = binding.battery
        emitter = binding.light
        lens = binding.lence
    }

    fun setImage(id: Int, nestType: NestType) {
        when (nestType) {
            NestType.BATTERY -> binding.battery.setImageResource(id)
            NestType.EMITTER -> binding.light.setImageResource(id)
            NestType.LENCE -> binding.lence.setImageResource(id)
        }
    }

    fun setOnBatteryClickListener(l: OnClickListener) {
        binding.battery.setOnClickListener(l)
    }

    fun setOnLightClickListener(l: OnClickListener) {
        binding.light.setOnClickListener(l)
    }

    fun setOnLensClickListener(l: OnClickListener) {
        binding.lence.setOnClickListener(l)
    }
}