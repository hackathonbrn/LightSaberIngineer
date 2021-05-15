package com.example.myapplication

import android.app.Application
import com.example.myapplication.model.Repository
import com.example.myapplication.ui.ItemFragment.ItemFragmentViewModel
import org.koin.android.ext.koin.androidContext
import org.koin.android.ext.koin.androidLogger
import org.koin.android.viewmodel.dsl.viewModel
import org.koin.core.context.startKoin
import org.koin.dsl.module

class LaserApplication : Application() {
    private val appModule = module {

        single<Repository> { Repository() }

        viewModel { ItemFragmentViewModel(get()) }
    }

    override fun onCreate() {
        super.onCreate()
        startKoin {
            androidLogger()
            androidContext(this@LaserApplication)
            modules(appModule)
        }
    }
}