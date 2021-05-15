package com.example.myapplication.ui.mainFragment

import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.example.myapplication.model.LaserSaber
import com.example.myapplication.schemeerrors.ErrorScheme

class MainViewModel : ViewModel() {

    var errorsLive : MutableLiveData<ErrorScheme?> = MutableLiveData(null)

    fun invokeError(error : ErrorScheme){
        errorsLive.value = error
    }

    fun errorResolved(){
        errorsLive.value = null
    }

    var saber: MutableLiveData<LaserSaber> = MutableLiveData(
        LaserSaber(null, null, null)
    )

    fun updateSaber(updater: (saber: LaserSaber) -> LaserSaber) {
        saber.value = updater.invoke(saber.value!!)
    }

}