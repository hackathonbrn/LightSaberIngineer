package com.commandnameexception.lasersaber.componentsView

import com.commandnameexception.lasersaber.model.electrocomponents.BaseComponent
import java.io.Serializable

abstract class ComponentsInfo : Item, Serializable {
    abstract val component: BaseComponent
    abstract val imageResource: Int
}