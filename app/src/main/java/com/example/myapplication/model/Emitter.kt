package com.example.myapplication.model
import com.example.myapplication.componentsView.NestType

class Emitter(
    override val name: String
) : BaseComponent() {
    val voltage = 0.0
    val power = 0.0
    override val type: NestType = NestType.EMITTER
}

