package com.commandnameexception.lasersaber.ui.supportfragment

import android.os.Bundle
import android.view.View
import android.webkit.WebView
import androidx.fragment.app.Fragment
import androidx.navigation.fragment.navArgs
import com.commandnameexception.lasersaber.R

class WebViewFragment : Fragment(R.layout.fragment_web_view) {
    private val args: WebViewFragmentArgs by navArgs()
    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        (view as WebView).loadUrl(args.url)

    }
}