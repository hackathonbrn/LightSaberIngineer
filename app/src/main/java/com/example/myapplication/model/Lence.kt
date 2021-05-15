package com.example.myapplication.model

import com.example.myapplication.componentsView.NestType

class Lence(
    override val name: String
) : BaseComponent() {
    override val type: NestType = NestType.EMITTER
}

