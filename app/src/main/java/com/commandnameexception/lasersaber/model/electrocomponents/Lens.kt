package com.commandnameexception.lasersaber.model.electrocomponents

import com.commandnameexception.lasersaber.componentsView.NestType

data class Lens(
    override val name: String,
    val r1 : Double,
    val r2 : Double,
    val n : Double = 1.5,
    val range : Float
) : BaseComponent() {
    override val character: String = ""
    override val type: NestType = NestType.LENCE
}

