package golang

func bubbleSort(array []int) []int {
	for range array {
		for i := 0; i < len(array)-1; i++ {
			if array[i] > array[i+1] {
				temp := array[i]
				array[i] = array[i+1]
				array[i+1] = temp
			}
		}
	}
	return array
}
