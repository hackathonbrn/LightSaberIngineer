package com.commandnameexception.lasersaber.ui

import android.os.Bundle
import android.os.CountDownTimer
import android.util.Log
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import androidx.navigation.fragment.findNavController
import com.commandnameexception.lasersaber.R
import com.commandnameexception.lasersaber.databinding.MainFragmentBinding
import kotlinx.coroutines.*

class SplashFragment : Fragment() {

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val view = inflater.inflate(R.layout.fragment_splash, container, false)
        val timer = object: CountDownTimer(1000, 1000) {
            override fun onTick(millisUntilFinished: Long) {  }
            override fun onFinish() {
                findNavController().navigate(R.id.action_splashFragment_to_mainFragment)
            }
        }
        timer.start()
        //nextScreen()
        return view
    }

    private fun nextScreen() {
        MainScope().launch(Dispatchers.IO) {
            delay(1000)
            //удаление фрагмента из backstack
            val deleteThisFragmentFromBackStack =
                findNavController().popBackStack(R.id.splashFragment, true)
                findNavController().navigate(R.id.action_splashFragment_to_mainFragment)
            }
        }
   /* override fun onDestroy() {
        super.onDestroy()
        findNavController().popBackStack(R.id.splashFragment, true)
    }*/
}