package com.example.myapplication.model

import com.example.myapplication.componentsView.NestType

class Lense(
    override val name: String
) : BaseComponent() {
    override val type: NestType = NestType.EMITTER
}

