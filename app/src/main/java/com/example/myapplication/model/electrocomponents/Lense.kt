package com.example.myapplication.model.electrocomponents

import com.example.myapplication.componentsView.NestType

data class Lense(
    override val name: String,

) : BaseComponent() {
    override val character: String = ""
    override val type: NestType = NestType.EMITTER
}

