package com.example.myapplication.model.electrocomponents
import android.graphics.Color
import com.example.myapplication.componentsView.NestType

data class Emitter(
    override val name: String,
    val voltage : Double = 0.0,
    val range : IntRange,
    val color : Int
) : BaseComponent() {
    override val character: String = voltage.toString()
    override val type: NestType = NestType.EMITTER
}

