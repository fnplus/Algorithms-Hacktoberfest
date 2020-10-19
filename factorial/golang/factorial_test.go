package main

import "testing"

// Testfactorial tests factorial function
func Testfactorial(t *testing.T) {

	if Factorial(2) != 2 {
		t.Error("Factorial(2) is wrong")
	}

	if Factorial(3) != 6 {
		t.Error("Factorial(3) is wrong")
	}

	if Factorial(0) != 1 {
		t.Error("Factorial(0) is wrong")
	}

	if Factorial(5) != 120 {
		t.Error("Factorial(5) is wrong")
	}
}
