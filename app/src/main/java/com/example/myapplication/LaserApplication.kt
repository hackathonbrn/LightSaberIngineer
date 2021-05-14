package com.example.myapplication

import android.app.Application
import org.koin.android.ext.koin.androidContext
import org.koin.core.context.startKoin
import org.koin.dsl.module

class LaserApplication : Application() {

    override fun onCreate() {
        super.onCreate()
        start()
    }

    private fun start() {
        startKoin {
            androidContext(this@LaserApplication)
            module(override = true) {
//                single { Repository() }
//                viewModel { ItemFragmentViewModel(get()) }
            }
        }
    }

}