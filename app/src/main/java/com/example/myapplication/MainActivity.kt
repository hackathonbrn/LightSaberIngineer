package com.example.myapplication

import android.content.Intent
import android.os.Bundle
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import com.example.myapplication.ui.MainFragment
import com.unity3d.player.UnityPlayerActivity

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        supportFragmentManager
            .beginTransaction()
            .add(R.id.fragment, MainFragment())
            .commit()

        findViewById<TextView>(R.id.textView).setOnClickListener {
            startActivity(Intent(this, UnityPlayerActivity::class.java))
        }
    }
}