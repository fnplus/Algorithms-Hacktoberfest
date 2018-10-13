package golang

func binarySearch(array []int, n int) bool {
	mid := len(array) / 2
	if len(array) == 0 {
		return false
	} else if array[mid] == n {
		return true
	} else if array[mid] > n {
		return binarySearch(array[:mid], n)
	} else {
		return binarySearch(array[mid+1:], n)
	}
}
