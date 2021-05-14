package com.example.myapplication.componentsView

import com.example.myapplication.model.BaseComponent

class LightItem(
    override val component: BaseComponent,
    override val imageResource: Int
) : ComponentsInfo() {
    override val viewType: NestType = NestType.EMITTER
}