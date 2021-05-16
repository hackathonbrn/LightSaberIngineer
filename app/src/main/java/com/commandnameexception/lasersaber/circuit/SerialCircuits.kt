import com.commandnameexception.lasersaber.model.electrocomponents.BaseComponent

open class SerialCircuits : Circuit {
    override var circuitBase: MutableList<BaseComponent> = mutableListOf()
    override fun buildCircuit(allComponent: MutableList<BaseComponent>): Circuit {

        val circuitsSerial: Circuit = SerialCircuits()

        allComponent.forEach {
            allComponent.first().connect(it)
            circuitBase.add(it)
        }

        return circuitsSerial
    }

    override fun checkCircuit(circuit: Circuit): Boolean {
        var sumI = 0
        val sourceI = circuitBase.first().type.id
        var worked = false
        for (j in 1 until circuitBase.size - 1) {
            sumI += circuitBase[j].research(sumI)
        }

        sumI -= sourceI * 2
        circuitBase.forEach {
            it.isCanWork = sumI < sourceI
        }
        var check = 0
        circuitBase.forEach {
            if (it.isCanWork) check++
        }

        if (check == circuitBase.size) worked = true

        return worked
    }

    override fun runBuild(circuit: Circuit) {

    }

}