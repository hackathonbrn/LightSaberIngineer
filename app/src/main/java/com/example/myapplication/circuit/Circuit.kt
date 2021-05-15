import com.example.myapplication.model.electrocomponents.BaseComponent

interface Circuit {
    var circuitBase : MutableList<BaseComponent>
    fun buildCircuit(allComponent: MutableList<BaseComponent>) : Circuit
    fun checkCircuit(circuit: Circuit) : Boolean
    fun runBuild(circuit : Circuit)
}