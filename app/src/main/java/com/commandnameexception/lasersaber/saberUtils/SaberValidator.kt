package com.commandnameexception.lasersaber.saberUtils

import com.commandnameexception.lasersaber.model.electrocomponents.LaserSaber

class SaberValidator {
    companion object {
        fun allComponentsOnPlace(saber: LaserSaber?): Boolean =
            saber?.battery != null &&
            saber.emitter != null &&
            saber.lens != null

        fun hasEnergyToStart(saber: LaserSaber): Boolean =
            saber.emitter!!.voltage <= saber.battery!!.startingCurrent

        fun chooseLenCorrect(saber: LaserSaber) : Boolean =
            saber.lens?.range!! > 0.0f
    }
}