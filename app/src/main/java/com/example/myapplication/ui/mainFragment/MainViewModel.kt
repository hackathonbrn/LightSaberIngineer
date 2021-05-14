package com.example.myapplication.ui.mainFragment

import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.myapplication.model.LaserSaber

class MainViewModel : ViewModel() {
    var saber: MutableLiveData<LaserSaber> = MutableLiveData(
        LaserSaber(null, null, null)
    )

    fun updateSaber(updater: (saber: LaserSaber) -> LaserSaber) {
        saber.value = updater.invoke(saber.value!!)
    }
}