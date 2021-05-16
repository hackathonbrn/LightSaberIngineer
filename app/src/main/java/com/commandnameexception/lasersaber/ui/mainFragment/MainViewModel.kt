package com.commandnameexception.lasersaber.ui.mainFragment

import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.commandnameexception.lasersaber.componentsView.BatteryItem
import com.commandnameexception.lasersaber.componentsView.LensItem
import com.commandnameexception.lasersaber.componentsView.LightItem
import com.commandnameexception.lasersaber.model.electrocomponents.LaserSaber
import com.commandnameexception.lasersaber.schemeerrors.ErrorScheme

class MainViewModel : ViewModel() {

    val emitterNestLive : MutableLiveData<LightItem> = MutableLiveData(null)
    val batteryNestLive : MutableLiveData<BatteryItem> = MutableLiveData(null)
    val lensNestLive : MutableLiveData<LensItem> = MutableLiveData(null)

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