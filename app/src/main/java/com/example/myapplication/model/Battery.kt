package com.example.myapplication.model

import com.example.myapplication.componentsView.NestType

class Battery(
    override val name: String
) : BaseComponent() {
    val electricalCapacity = 0.0
    val voltage = 0.0
    val power = 0.0
    override val type: NestType = NestType.BATTERY
}
