fun containsDuplicates(list: List<String>) : Boolean {
    with(list) {
        for (cursor1 in 0 until size) {
            for (cursor2 in 0 until size) {
                if (cursor1 != cursor2) {
                    if (get(cursor1) == get(cursor2)) return true
                }
            }
        }
    }    
    return false
}
