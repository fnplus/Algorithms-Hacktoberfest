import kotlin.math.abs
import kotlin.math.cos

fun main() {
    var p0 = 0.5
    var p1 : Double = (22.0/7.0) / 4
    var iterations : Int;
    var tolerance = 0.00001
    var p : Double

    print("Enter number of iterations: ")
    iterations = readLine()!!.toInt()

    var i = 2
    var q0 = cos(p0) - p0
    var q1 = cos(p1) - p1

    while (i < iterations){
        p = p1 - (q1 * (p1  - q0)) / (q1 - q0)
        if ( abs(p - p1) < tolerance){
            println("Procedure Completed Successfully")

        }else{
            println("Method failed after $iterations iterations \n Procedure Completed Successfully")
        }
        i++
        p0 = p1
        q0 = q1
        p1 = p
        q1 = cos(p) - p
    }

}
