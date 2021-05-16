package com.example.myapplication.model.electrocomponents

import com.example.myapplication.componentsView.NestType

data class Lens(
    override val name: String,
    val r1 : Double,
    val r2 : Double,
    val n : Double = 1.5
) : BaseComponent() {
    override val type: NestType = NestType.EMITTER
}

