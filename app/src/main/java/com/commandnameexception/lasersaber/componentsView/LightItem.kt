package com.commandnameexception.lasersaber.componentsView

import com.commandnameexception.lasersaber.model.electrocomponents.BaseComponent

class LightItem(
    override val component: BaseComponent,
    override val imageResource: Int
) : ComponentsInfo() {
    override val viewType: NestType = NestType.EMITTER
}