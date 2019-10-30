/**
 * O(n * log(n))
 * 
 * Quick sort on average runs 2-3 times faster than [merge_sort].
 *
 * If the data is mostly pre-sorted, then the runtime performance will
 * be worse than expected, and will approach O(n^2). Ironically, the
 * pre-sorted data takes longer to sort than the “random” data. The 
 * reason is because the pivot point will always be picked 
 * sub-optimally, with a “lopsided” partitioning of the data.
 * When we pick this "lopsided" pivot, we are only reducing the problem
 * size by one element. If the pivot were ideal, we would be reducing
 * the problem size by half, since roughly half of the elements would
 * be to the left of the pivot and the other half to the right.
 */
fun quick_sort(list: MutableList<Int>,
               startIndex: Int = 0,
               endIndex: Int = list.size - 1) {
    if (startIndex < endIndex) {
        val pivotIndex = partition(list, startIndex, endIndex)
        quick_sort(list, startIndex, pivotIndex - 1) // Before pivot index
        quick_sort(list, pivotIndex + 1, endIndex) // After pivot index
    }
}

/**
 * This function takes last element as pivot, places the pivot
 * element at its correct (final) position in (fully) sorted list,
 * and places all smaller (smaller than pivot) to left of pivot
 * and all greater elements to right of pivot.
 * 
 * Ideally this pivot element would represent the median of the
 * sublist. But in this implementation we are choosing the end
 * of the sublist (the element at endIndex).
 */
fun partition(list: MutableList<Int>,
              startIndex: Int = 0,
              endIndex: Int = list.size - 1): Int {
    // Element to be placed at the correct position in the list
    val pivotValue = list[endIndex]

    // Index of element smaller than pivotValue
    var smallerElementIndex = startIndex

    // Make a single pass through the list (not including endIndex)
    for (index in startIndex until endIndex) {
        // If current element is smaller than equal to pivotValue then swap it w/
        // the element at smallerElementIndex
        val valueAtIndex = list[index]
        if (valueAtIndex < pivotValue) {
            list.swap(smallerElementIndex, index)
            smallerElementIndex++
        }
    }

    // Finally move the pivotValue into the right place on the list
    list.swap(smallerElementIndex, endIndex)

    // Return the index just after where the pivot value ended up
    return smallerElementIndex
}

fun MutableList<Int>.swap(index1: Int, index2: Int) {
    val tmp = this[index1] // 'this' corresponds to the list
    this[index1] = this[index2]
    this[index2] = tmp
}
