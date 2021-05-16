package com.commandnameexception.lasersaber.model.electrocomponents

import com.commandnameexception.lasersaber.componentsView.NestType

data class Battery(
    override val name: String,
    val startingCurrent: Double = 0.0
) : BaseComponent() {
    override val character: String = startingCurrent.toString()
    override val type: NestType = NestType.BATTERY
}
