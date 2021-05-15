package com.example.myapplication.model
import com.example.myapplication.componentsView.NestType

data class Emitter(
    override val name: String,
    val voltage : Double = 0.0
) : BaseComponent() {
    val power = 0.0
    override val type: NestType = NestType.EMITTER
}

