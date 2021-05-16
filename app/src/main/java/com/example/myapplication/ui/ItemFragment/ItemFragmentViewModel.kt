package com.example.myapplication.ui.ItemFragment

import androidx.lifecycle.ViewModel
import com.example.myapplication.componentsView.ComponentsInfo
import com.example.myapplication.componentsView.NestType
import com.example.myapplication.model.Repository

class ItemFragmentViewModel (
    private val repository: Repository
) : ViewModel(){
    fun loadItems(type: NestType) : List<ComponentsInfo>{
        return when(type){
            NestType.BATTERY -> repository.batterys
            NestType.EMITTER -> repository.lights
            NestType.LENCE -> repository.lights
        }
    }
}