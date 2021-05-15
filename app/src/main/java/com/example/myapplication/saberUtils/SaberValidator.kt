package com.example.myapplication.saberUtils

import com.example.myapplication.model.LaserSaber

class SaberValidator {
    companion object {
        fun allComponentsOnPlace(saber: LaserSaber?): Boolean =
            saber?.battery != null &&
            saber.emitter != null &&
            saber.lense != null
    }
}