package com.example.myapplication.ui.ItemFragment

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.core.os.bundleOf
import androidx.recyclerview.widget.RecyclerView
import com.example.myapplication.R
import com.example.myapplication.componentsView.ComponentsInfo
import com.example.myapplication.componentsView.NestType

class SaberAdapter(
    private val values: List<ComponentsInfo>,
    private val function: (bundle: Bundle) -> Unit
) : RecyclerView.Adapter<RecyclerView.ViewHolder>() {

    override fun getItemViewType(position: Int): Int {
        return values[position].viewType.id
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): RecyclerView.ViewHolder {
        return when (NestType.values().find { it.id == viewType }) {
            NestType.BATTERY -> {
                val view = LayoutInflater.from(parent.context)
                    .inflate(R.layout.fragment_item, parent, false)
                ViewHolderBattery(view)
            }
            NestType.EMITTER -> {
                val view = LayoutInflater.from(parent.context)
                    .inflate(R.layout.fragment_item, parent, false)
                ViewHolderLight(view)
            }
            else -> throw Exception("No VIEW HOLDER TIME")
        }
    }

    override fun onBindViewHolder(holder: RecyclerView.ViewHolder, position: Int) {
        when (values[position].viewType) {
            NestType.BATTERY -> (holder as ViewHolderBattery).onBind(values[position])
            NestType.EMITTER -> (holder as ViewHolderLight).onBind(values[position])
        }
    }

    override fun getItemCount(): Int = values.size

    inner class ViewHolderBattery(view: View) : RecyclerView.ViewHolder(view) {
        val idView: TextView = view.findViewById(R.id.item_number)
        val contentView: TextView = view.findViewById(R.id.content)
        val imageView: ImageView = view.findViewById(R.id.image)
        fun onBind(componentsInfo: ComponentsInfo) {
            imageView.setImageResource(componentsInfo.imageResource)
            imageView.setOnClickListener {
                function.invoke(
                    bundleOf(componentsInfo.viewType.name to componentsInfo.component)
                )
            }
        }
    }

    inner class ViewHolderLight(view: View) : RecyclerView.ViewHolder(view) {
        val idView: TextView = view.findViewById(R.id.item_number)
        val contentView: TextView = view.findViewById(R.id.content)
        val imageView: ImageView = view.findViewById(R.id.image)
        fun onBind(componentsInfo: ComponentsInfo) {
            imageView.setImageResource(componentsInfo.imageResource)
            imageView.setOnClickListener {
                function.invoke(
                    bundleOf(componentsInfo.viewType.name to componentsInfo.component)
                )
            }
        }
    }
}