package com.example.myapplication.componentsView

import com.example.myapplication.model.BaseComponent

abstract class ComponentsInfo : Item {
    abstract val component: BaseComponent
    abstract val imageResource: Int
}