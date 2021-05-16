package com.commandnameexception.lasersaber

import android.app.Application
import com.commandnameexception.lasersaber.model.Repository
import com.commandnameexception.lasersaber.ui.ItemFragment.ItemFragmentViewModel
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