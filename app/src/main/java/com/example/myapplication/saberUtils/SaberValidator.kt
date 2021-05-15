package com.example.myapplication.saberUtils

import com.example.myapplication.model.electrocomponents.LaserSaber

class SaberValidator {
    companion object {
        fun allComponentsOnPlace(saber: LaserSaber?): Boolean =
            saber?.battery != null &&
            saber.emitter != null /*&&
            saber.lense != null*/

        fun hasEnergyToStart(saber: LaserSaber): Boolean =
            saber.emitter!!.voltage <= saber.battery!!.startingCurrent
    }
}