package com.commandnameexception.lasersaber.model.electrocomponents

data class LaserSaber(
    val battery : Battery? = null,
    val emitter : Emitter? = null,
    val lens : Lens? = null
)