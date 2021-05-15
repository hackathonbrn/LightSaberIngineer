package com.example.myapplication.componentsView

import com.example.myapplication.model.electrocomponents.BaseComponent
import java.io.Serializable

abstract class ComponentsInfo : Item, Serializable {
    abstract val component: BaseComponent
    abstract val imageResource: Int
}