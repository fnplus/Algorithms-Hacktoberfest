package main

import "fmt"

func linearSearch(numbers []int, item int) int {

	if numbers != nil && len(numbers) > 0 {

		for i := 0; i < len(numbers); i++ {

			if numbers[i] == item {
				return numbers[i]
			}

		}

	}

	return -1
}

func main() {

	numbers := []int{5, 3, 4, 2, 1, 6, 7, 8, 10, 9}

	result := linearSearch(numbers, 7)

	if result != -1 {
		fmt.Println("Item", result, "is found!")
	}
}
