package com.example.myapplication.ui.ItemFragment

import android.annotation.SuppressLint
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
import com.example.myapplication.model.electrocomponents.Emitter
import com.example.myapplication.model.electrocomponents.Lens
import com.google.android.material.card.MaterialCardView

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
            NestType.LENCE -> {
                val view = LayoutInflater.from(parent.context)
                    .inflate(R.layout.fragment_item, parent, false)
                ViewHolderLens(view)
            }
            else -> throw Exception("No VIEW HOLDER TIME")
        }
    }

    override fun onBindViewHolder(holder: RecyclerView.ViewHolder, position: Int) {
        when (values[position].viewType) {
            NestType.BATTERY -> (holder as ViewHolderBattery).onBind(values[position])
            NestType.EMITTER -> (holder as ViewHolderLight).onBind(values[position])
            NestType.LENCE -> (holder as ViewHolderLens).onBind(values[position])
        }
    }

    override fun getItemCount(): Int = values.size

    inner class ViewHolderBattery(view: View) : RecyclerView.ViewHolder(view) {
        val idView: TextView = view.findViewById(R.id.item_number)
        val cardView: MaterialCardView = view.findViewById(R.id.card)
        val contentView: TextView = view.findViewById(R.id.content)
        val imageView: ImageView = view.findViewById(R.id.image)
        fun onBind(componentsInfo: ComponentsInfo) {
            contentView.setText("Аккумулятор " + componentsInfo.component.name)
            imageView.setImageResource(componentsInfo.imageResource)
            cardView.setOnClickListener {
                function.invoke(
                    bundleOf(componentsInfo.viewType.name to componentsInfo)
                )
            }
        }
    }

    inner class ViewHolderLight(view: View) : RecyclerView.ViewHolder(view) {
        val idView: TextView = view.findViewById(R.id.item_number)
        val cardView: MaterialCardView = view.findViewById(R.id.card)
        val contentView: TextView = view.findViewById(R.id.content)
        val imageView: ImageView = view.findViewById(R.id.image)
        fun onBind(componentsInfo: ComponentsInfo) {
            idView.setText("Диапазон излучения: " + (componentsInfo.component as Emitter).range.toString())
            contentView.setText("Излучатель " + componentsInfo.component.name)
            imageView.setImageResource(componentsInfo.imageResource)
            cardView.setOnClickListener {
                function.invoke(
                    bundleOf(componentsInfo.viewType.name to componentsInfo)
                )
            }
        }
    }

    inner class ViewHolderLens(view: View) : RecyclerView.ViewHolder(view) {
        val title: TextView = view.findViewById(R.id.item_number)
        val cardView: MaterialCardView = view.findViewById(R.id.card)
        val contentView: TextView = view.findViewById(R.id.content)
        val imageView: ImageView = view.findViewById(R.id.image)
        @SuppressLint("SetTextI18n")
        fun onBind(componentsInfo: ComponentsInfo) {
            val lens = componentsInfo.component as Lens
            title.setText(lens.name)
            contentView.setText(
                "R1 = ${lens.r1}" +
                        "R2 = ${lens.r2}" +
                        "n = ${lens.n}"
            )
            imageView.setImageResource(componentsInfo.imageResource)
            cardView.setOnClickListener {
                function.invoke(
                    bundleOf(componentsInfo.viewType.name to componentsInfo)
                )
            }
        }
    }
}