import java.lang.Math.pow
import kotlin.math.abs
import kotlin.math.cos
import kotlin.math.sin

fun main() {
    var p0 = 0.5
    var tolerance = 0.00001
    var p : Double = 0.0

    print("Enter maximum number of iterations: ")
    var iteration : Int = readLine()!!.toInt()
    var i = 1
    while (i < iteration){
        p = p0 - (cos(p0) - p0) / (-sin(p0) - 1)
        if (abs(p - p0) < tolerance){
            println("Procedure Completed Successfully. \n Solution is (X = $p0")
        }else{
            println("Method failed after iteration number $p0 \n Procedure completed unsuccessfully")
        }
        p0 = p
        i++
    }
}
