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
            R.drawable.ic_baseline_battery_charging_full_24
            Battery("B120"),
            R.drawable.but100
        ),
        BatteryItem(
            Battery(
                "B220",
                200.0
            ),
            R.drawable.ic_baseline_light_mode_24
            Battery("B220"),
            R.drawable.but50
        ),
        BatteryItem(
            Battery(
                "B320",
                300.0
            ),
            R.drawable.outline_add_circle_24
            Battery("B320"),
            R.drawable.but100
        )
    )
    val lights = listOf(
        LightItem(
            Emitter(
                "E1220",
                150.0
            ),
            R.drawable.qwer
            Emitter("E1220"),
            R.drawable.lense_on
        ),
        LightItem(
            Emitter(
                "E12",
                250.0
            ),
            R.drawable.ic_baseline_light_mode_24
            Emitter("E12"),
            R.drawable.lense_on
        ),
        LightItem(
            Emitter(
                "E1",
                350.0
            ),
            R.drawable.outline_remove_circle_24
            Emitter("E1"),
            R.drawable.lense_on
        )
    )

//    var laserSaber = LaserSaber()
}