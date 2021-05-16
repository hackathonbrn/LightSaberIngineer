package com.example.myapplication.model.electrocomponents

import com.example.myapplication.componentsView.NestType

data class Battery(
    override val name: String,
    val startingCurrent: Double = 0.0
) : BaseComponent() {
    override val character: String = startingCurrent.toString()
    override val type: NestType = NestType.BATTERY
}
