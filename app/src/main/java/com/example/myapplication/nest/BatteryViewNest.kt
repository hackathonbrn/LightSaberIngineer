package com.example.myapplication.nest

data class BatteryViewNest(
    override val viewId: Int,
    override val imageId: Int
) : Nest() {
    override val type: NestType
        get() = NestType.BATTERY
}