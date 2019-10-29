/**
 * O(n * log(n))
 *
 * This function doesn't actually do any sorting (actually done in [merge]).
 * - O(log(n)) -> recursively splitting the given list into smaller lists.
 * - O(n) -> merging two pre-sorted lists quickly (the [merge] function).
 *
 * [Graphic depicting merge sort in action](http://bit.ly/2u1HuNp).
 *
 * We can also describe the steps of the algorithm a little differently:
 *
 * 1) Split the n elements of the list into n separate lists, each of size one.
 * 2) Pair adjacent lists and merge them, resulting in about half as many lists
 *    each about twice the size.
 * 3) Repeat step 2 until you have one list of size n.
 *
 * After the last recursive calls, we are operating on arrays of size 1, which
 * cannot be split any further and are trivially sorted themselves, thus giving
 * us our base case.
 * 
 * Please note that [quick_sort] on average runs 2-3 times faster merge sort.
 */
fun merge_sort(list: MutableList<String>): MutableList<String> {
    // Can't split lists anymore, so stop recursion
    val length = list.size
    if (length <= 1) return list

    // Split the list into two and recurse (divide)
    val middleIndex = length / 2
    val leftList = merge_sort(list.subList(0, middleIndex))
    val rightList = merge_sort(list.subList(middleIndex, length))

    // Merge the left and right lists (conquer)
    return merge(leftList, rightList)
}

/**
 * In this step, the actual sorting of 2 already sorted lists occurs.
 *
 * The merge sort algorithm takes advantage of the fact that two sorted 
 * lists can be merged into one sorted list very quickly.
 */
fun merge(leftList: MutableList<String>, rightList: MutableList<String>): 
        MutableList<String> {
    val result = mutableListOf<String>()
    var leftIndex = 0
    var rightIndex = 0

    while (leftIndex < leftList.size && rightIndex < rightList.size) {
        val lhs = leftList[leftIndex]
        val rhs = rightList[rightIndex]
        if (lhs < rhs) {
            result.add(lhs)
            leftIndex++
        } else {
            result.add(rhs)
            rightIndex++
        }
    }

    // Copy remaining elements of leftList (if any) into the result
    while (leftIndex < leftList.size) {
        result.add(leftList[leftIndex])
        leftIndex++
    }

    // Copy remaining elements of rightList (if any) into the result
    while (rightIndex < rightList.size) {
        result.add(rightList[rightIndex])
        rightIndex++
    }

    return result
}
