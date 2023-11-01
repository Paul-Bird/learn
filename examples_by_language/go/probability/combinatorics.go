package main

import (
	"fmt"
)

func main() {
	fmt.Printf("10 choose 6 = %d\n", n_choose_k(10, 6))                // 210
	fmt.Printf("permutations 10 choose 6 = %d\n", permutations(10, 6)) // 151200
}

// create a function factorial that takes an integer n and returns n!
func factorial(n int) int {
	if n <= 1 {
		return 1
	}
	return n * factorial(n-1)
}

// create a function n_choose_k that takes two integers n and k and
// returns the number of ways to choose k items from n items
func n_choose_k(n int, k int) int {
	return factorial(n) / (factorial(k) * factorial(n-k))
}

// create a function permutations that takes two integers n and k
// returns the number of ways to choose k items from n items when order matters
func permutations(n int, k int) int {
	return factorial(n) / factorial(n-k)
}
