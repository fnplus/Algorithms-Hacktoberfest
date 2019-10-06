package golang

func mergeSort(arr []int) []int {
	if len(arr) != 0 {
		sort(&arr, 0, len(arr)-1)
	}
	return arr
}

func sort(arr *[]int, left, right int) {
	if left < right {
		var mid int = (left + right) / 2
		sort(arr, left, mid)
		sort(arr, mid+1, right)
		merge(arr, left, mid, right)
	}
}

func merge(arr *[]int, left, mid, right int) {
	n1, n2 := mid-left+1, right-mid
	lefts := make([]int, n1)
	rights := make([]int, n2)
	for i := 0; i < n1; i++ {
		lefts[i] = (*arr)[left+i]
	}
	for j := 0; j < n2; j++ {
		rights[j] = (*arr)[mid+1+j]
	}

	i, j, k := 0, 0, left
	for i < n1 && j < n2 {
		if lefts[i] <= rights[j] {
			(*arr)[k] = lefts[i]
			i++
		} else {
			(*arr)[k] = rights[j]
			j++
		}
		k++
	}

	for i < n1 {
		(*arr)[k] = lefts[i]
		i++
		k++
	}

	for j < n2 {
		(*arr)[k] = rights[j]
		j++
		k++
	}
}
