package com.example.myapplication.model

import com.example.myapplication.R
import com.example.myapplication.componentsView.BatteryItem
import com.example.myapplication.componentsView.LightItem

class Repository {
    val batterys = listOf(
        BatteryItem(
            Battery(
                "B120",
                100.0
            ),
            R.drawable.but100
        ),
        BatteryItem(
            Battery(
                "B220",
                200.0
            ),
            R.drawable.but50
        ),
        BatteryItem(
            Battery(
                "B320",
                300.0
            ),
            R.drawable.but100

        )
    )
    val lights = listOf(
        LightItem(
            Emitter(
                "E1220",
                150.0
            ),
            R.drawable.lense_on
        ),
        LightItem(
            Emitter(
                "E12",
                250.0
            ),
            R.drawable.lense_on
        ),
        LightItem(
            Emitter(
                "E1",
                350.0
            ),
            R.drawable.lense_off
        )
    )
//    var laserSaber = LaserSaber()
}