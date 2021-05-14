package com.example.myapplication.canvas

import android.graphics.Canvas
import android.graphics.Color
import android.graphics.Paint

interface DrawableItem{
    var myPaint : Paint?
    fun draw(canvas: Canvas, paint: Paint)
}