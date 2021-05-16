package com.commandnameexception.lasersaber.ui.order

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.commandnameexception.lasersaber.R
import com.commandnameexception.lasersaber.databinding.OrderItemBinding
import com.commandnameexception.lasersaber.model.Order


class OrderRecyclerViewAdapter(
    private val values: List<Order>
) : RecyclerView.Adapter<OrderRecyclerViewAdapter.ViewHolder>() {

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val view = LayoutInflater.from(parent.context)
            .inflate(R.layout.order_item, parent, false)
        return ViewHolder(view)
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        holder.onBind(values[position])
    }

    override fun getItemCount(): Int = values.size

    inner class ViewHolder(view: View) : RecyclerView.ViewHolder(view) {
        private val binding = OrderItemBinding.bind(view)

        fun onBind(order: Order){
            binding.colorRequirements.text = order.colorRequirements
        }
    }
}