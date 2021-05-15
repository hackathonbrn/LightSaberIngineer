package com.example.myapplication.model.electrocomponents

import Conductive
import Connectable

abstract class BaseComponent : Connectable, Conductive {
    abstract val name : String
    override fun research(i: Int): Int {
        return type.id
    }
    var isCanWork : Boolean = false

    override val connection: MutableList<Connectable> = mutableListOf()

    override fun connect(connect: Connectable): Connectable {
        connection.add(connect)
        return connect
    }

    override fun disconnect(connect: Connectable) {
        connection.remove(connect)
    }
}