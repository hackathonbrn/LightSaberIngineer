package com.example.myapplication.model

import com.example.myapplication.R
import com.example.myapplication.componentsView.BatteryItem
import com.example.myapplication.componentsView.LightItem

class Repository {
    val batterys = listOf(
        BatteryItem(
            Battery("B120"),
            R.drawable.but100
        ),
        BatteryItem(
            Battery("B220"),
            R.drawable.but50
        ),
        BatteryItem(
            Battery("B320"),
            R.drawable.but100
        )
    )
    val lights = listOf(
        LightItem(
            Emitter("E1220"),
            R.drawable.lense_on
        ),
        LightItem(
            Emitter("E12"),
            R.drawable.lense_on
        ),
        LightItem(
            Emitter("E1"),
            R.drawable.lense_on
        )
    )

//    var laserSaber = LaserSaber()
}