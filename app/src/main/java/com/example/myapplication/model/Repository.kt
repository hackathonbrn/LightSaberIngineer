package com.example.myapplication.model

import android.graphics.Color
import android.os.Build
import androidx.annotation.RequiresApi
import androidx.core.graphics.ColorUtils
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
    @RequiresApi(Build.VERSION_CODES.O)
    val lights = listOf(
        LightItem(
            Emitter(
                "E1220",
                150.0,
                405..480,
                Color.RED
            ),
            R.drawable.emitter_blue
        ),
        LightItem(
            Emitter(
                "E12",
                250.0,
                480..510,
                Color.rgb(1f,0.5f,0.2f)
            ),
            R.drawable.emitter_lamp
        ),
        LightItem(
            Emitter(
                "E-S",
                350.0,
                510..530,
                Color.YELLOW
            ),
            R.drawable.emitter_sss
        ),
        LightItem(
            Emitter(
                "E1",
                350.0,
                530..600,
                Color.GREEN
            ),
            R.drawable.emitter_rose
        ),LightItem(
            Emitter(
                "E6",
                310.0,
                600..620,
                Color.rgb(0.2f, 0.5f, 1f)
            ),
            R.drawable.emitter_brown
        ),
        LightItem(
            Emitter(
                "E42",
                200.0,
                620..680,
                Color.BLUE
            ),
            R.drawable.emitter_one_big
        ),
        LightItem(
            Emitter(
                "E1",
                350.0,
                680..790,
                Color.MAGENTA
            ),
            R.drawable.emitter_two
        ),
    )
//    var laserSaber = LaserSaber()
}