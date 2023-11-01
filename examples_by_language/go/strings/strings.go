package main

import (
	"fmt"
	"strings"
)

func main() {
	const string1 = "gafghbdfdcdow"
	const string2 = "aaebalacladow"
	fmt.Println(longestCommonSubstring(string1, string2))   // dow
	fmt.Println(longestCommonSubsequence(string1, string2)) //abcdow
}

// copilot generated
func longestCommonSubstring(a string, b string) string {
	var longest string
	for i := 0; i < len(a); i++ {
		for j := i + 1; j <= len(a); j++ {
			if len(longest) >= j-i {
				continue
			}
			if strings.Contains(b, a[i:j]) {
				longest = a[i:j]
			}
		}
	}
	return longest
}

// copilot generated
func longestCommonSubsequence(a string, b string) string {
	m := len(a)
	n := len(b)
	dp := make([][]int, m+1)
	for i := range dp {
		dp[i] = make([]int, n+1)
	}
	for i := 1; i <= m; i++ {
		for j := 1; j <= n; j++ {
			if a[i-1] == b[j-1] {
				dp[i][j] = dp[i-1][j-1] + 1
			} else {
				dp[i][j] = max(dp[i][j-1], dp[i-1][j])
			}
		}
	}
	var res strings.Builder
	for i, j := m, n; i > 0 && j > 0; {
		if a[i-1] == b[j-1] {
			res.WriteByte(a[i-1])
			i--
			j--
		} else if dp[i][j-1] > dp[i-1][j] {
			j--
		} else {
			i--
		}
	}
	return reverse(res.String())
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func reverse(s string) string {
	runes := []rune(s)
	for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	return string(runes)
}
