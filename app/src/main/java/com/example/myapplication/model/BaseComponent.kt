package com.example.myapplication.model

import Conductive
import Connectable
import java.io.Serializable

abstract class BaseComponent : Serializable, Connectable, Conductive {
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