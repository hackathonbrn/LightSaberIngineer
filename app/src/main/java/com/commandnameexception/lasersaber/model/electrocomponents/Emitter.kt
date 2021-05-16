package com.commandnameexception.lasersaber.model.electrocomponents
import com.commandnameexception.lasersaber.componentsView.NestType

data class Emitter(
    override val name: String,
    val voltage : Double = 0.0,
    val range : IntRange,
    val color : Int
) : BaseComponent() {
    override val character: String = voltage.toString()
    override val type: NestType = NestType.EMITTER
}

