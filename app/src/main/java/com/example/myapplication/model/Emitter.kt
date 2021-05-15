package com.example.myapplication.model

class Emitter(
import com.example.myapplication.componentsView.NestType

class Emmiter(
    override val name: String
) : BaseComponent() {
    val voltage = 0.0
    val power = 0.0
    override val type: NestType = NestType.EMITTER
}

