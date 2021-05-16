interface Connectable {
    val connection : MutableList<Connectable>
    fun connect(connect : Connectable) : Connectable
    fun disconnect(connect : Connectable)
}