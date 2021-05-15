package com.example.myapplication.model.electrocomponents
import android.graphics.Color
import com.example.myapplication.componentsView.NestType

data class Emitter(
    override val name: String,
    val voltage : Double = 0.0,
    val range : IntRange,
    val color : Int
) : BaseComponent() {
    val power = 0.0
    override val type: NestType = NestType.EMITTER
}

