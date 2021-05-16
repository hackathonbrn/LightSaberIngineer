package com.commandnameexception.lasersaber.ui.ItemFragment

import androidx.lifecycle.ViewModel
import com.commandnameexception.lasersaber.componentsView.ComponentsInfo
import com.commandnameexception.lasersaber.componentsView.NestType
import com.commandnameexception.lasersaber.model.Repository

class ItemFragmentViewModel (
    private val repository: Repository
) : ViewModel(){
    fun loadItems(type: NestType) : List<ComponentsInfo>{
        return when(type){
            NestType.BATTERY -> repository.batterys
            NestType.EMITTER -> repository.lights
            NestType.LENCE -> repository.lenses
        }
    }
}