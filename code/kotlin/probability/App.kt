/*
 * This Kotlin source file was generated by the Gradle 'init' task.
 */
package probability

fun main() {
    val five_choose_three = n_choose_k(5, 3)
    print("five_choose_three: $five_choose_three\n")
    val eleven_choose_three = n_choose_k(11, 3)
    print("eleven_choose_three: $eleven_choose_three\n")
    val three_from_eleven = permutations(11, 3)
    print("three_from_eleven permutations: $three_from_eleven\n")
}

fun factorial(n: Int): Int {
    var result = 1
    for (i in 1..n) {
        result *= i
    }
    return result
}

fun n_choose_k(n: Int, k: Int): Int {
    return factorial(n) / (factorial(k) * factorial(n - k))
}   

fun permutations(n: Int, k: Int): Int {
    return factorial(n) / factorial(n - k)
}
