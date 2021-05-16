package com.example.myapplication.model

import com.example.myapplication.R
import com.example.myapplication.componentsView.BatteryItem
import com.example.myapplication.componentsView.LightItem
import com.example.myapplication.model.electrocomponents.Battery
import com.example.myapplication.model.electrocomponents.Emitter

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
                "B320",
                430.0
            ),
            R.drawable.but_big
        ),
        BatteryItem(
            Battery(
                "B220",
                300.0
            ),
            R.drawable.but50
        ),
        BatteryItem(
            Battery(
                "B120-min",
                140.0
            ),
            R.drawable.but_small
        ),
        BatteryItem(
            Battery(
                "B120",
                100.0
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
            R.drawable.emitter_blue
        ),
        LightItem(
            Emitter(
                "E12",
                250.0
            ),
            R.drawable.emitter_lamp
        ),
        LightItem(
            Emitter(
                "E-S",
                100.0
            ),
            R.drawable.emitter_sss
        ),
        LightItem(
            Emitter(
                "E1-b",
                120.0
            ),
            R.drawable.emitter_rose
        ),LightItem(
            Emitter(
                "E6",
                90.0
            ),
            R.drawable.emitter_brown
        ),
        LightItem(
            Emitter(
                "E42",
                180.0
            ),
            R.drawable.emitter_one_big
        ),
        LightItem(
            Emitter(
                "E1",
                230.0
            ),
            R.drawable.emitter_two
        ),
    )
//    var laserSaber = LaserSaber()
}