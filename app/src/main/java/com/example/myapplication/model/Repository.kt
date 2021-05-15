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
        ),
        BatteryItem(
            Battery(
                "B220",
                200.0
            ),
            R.drawable.ic_baseline_light_mode_24
        ),
        BatteryItem(
            Battery(
                "B320",
                300.0
            ),
            R.drawable.outline_add_circle_24
        )
    )
    val lights = listOf(
        LightItem(
            Emitter(
                "E1220",
                150.0
            ),
            R.drawable.qwer
        ),
        LightItem(
            Emitter(
                "E12",
                250.0
            ),
            R.drawable.ic_baseline_light_mode_24
        ),
        LightItem(
            Emitter(
                "E1",
                350.0
            ),
            R.drawable.outline_remove_circle_24
        )
    )

//    var laserSaber = LaserSaber()
}