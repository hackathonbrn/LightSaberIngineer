package com.example.myapplication.model.electrocomponents

import com.example.myapplication.componentsView.NestType

data class Battery(
    override val name: String,
    val startingCurrent: Double = 0.0
) : BaseComponent() {
    val electricalCapacity = 0.0
    override val type: NestType = NestType.BATTERY
}
