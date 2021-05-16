package com.commandnameexception.lasersaber.model

import android.graphics.Color
import android.os.Build
import androidx.annotation.RequiresApi
import com.commandnameexception.lasersaber.R
import com.commandnameexception.lasersaber.componentsView.BatteryItem
import com.commandnameexception.lasersaber.componentsView.LensItem
import com.commandnameexception.lasersaber.componentsView.LightItem
import com.commandnameexception.lasersaber.model.electrocomponents.Battery
import com.commandnameexception.lasersaber.model.electrocomponents.Emitter
import com.commandnameexception.lasersaber.model.electrocomponents.Lens

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
                Color.rgb(1f, 0.5f, 0.2f)
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
        ),
        LightItem(
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

    val lenses = listOf(
        LensItem(
            Lens(
                "Линза |",
                0.4,
                0.7,
                range = 1.86f
            ),
            R.drawable.lenc_7_4
        ),
        LensItem(
            Lens(
                "Линза ||",
                0.37,
                0.7,
                range = 1.56f
            ),
            R.drawable.lenc_7_37
        ),
        LensItem(
            Lens(
                "Линза |||",
                0.34,
                0.7,
                range = 1.32f
            ),
            R.drawable.lenc_7_34
        ),
        LensItem(
            Lens(
                "Линза |X",
                0.31,
                0.7,
                range = 1.11f
            ),
            R.drawable.lenc_7_31
        ),
        LensItem(
            Lens(
                "Линза X",
                0.28,
                0.7,
                range = 0.93f
            ),
            R.drawable.lenc_7_28
        ),
        LensItem(
            Lens(
                "Линза X|",
                0.25,
                0.7,
                range = 0.77f
            ),
            R.drawable.lenc_7_25
        ),
        LensItem(
            Lens(
                "Линза X||",
                9999.0,
                9999.0,
                range = 0.0f
            ),
            R.drawable.lence_error_1
        ),
        LensItem(
            Lens(
                "Линза X|||",
                -0.7,
                9999.0,
                range = 0.0f
            ),
            R.drawable.lence_error_2
        ),
    )


}