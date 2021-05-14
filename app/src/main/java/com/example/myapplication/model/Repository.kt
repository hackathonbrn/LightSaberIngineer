package com.example.myapplication.model

import com.example.myapplication.R
import com.example.myapplication.componentsView.BatteryItem
import com.example.myapplication.componentsView.LightItem

class Repository {
    val batterys = listOf(
        BatteryItem(
            Battery("B120"),
            R.drawable.ic_baseline_battery_charging_full_24
        ),
        BatteryItem(
            Battery("B220"),
            R.drawable.ic_baseline_light_mode_24
        ),
        BatteryItem(
            Battery("B320"),
            R.drawable.outline_add_circle_24
        )
    )
    val lights = listOf(
        LightItem(
            Emmiter("E1220"),
            R.drawable.qwer
        ),
        LightItem(
            Battery("E12"),
            R.drawable.ic_baseline_light_mode_24
        ),
        LightItem(
            Battery("E1"),
            R.drawable.outline_remove_circle_24
        )
    )

//    var laserSaber = LaserSaber()
}