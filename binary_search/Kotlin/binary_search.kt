fun binarySearch(item: String, list: List<String>): Boolean {
    // Exit conditions (base cases)
    if (list.isEmpty()) {
        return false
    }

    // Setup probe
    val probeIndex = list.size / 2
    val probeItem = list[probeIndex]

    // Does the probe match? If not, split and recurse
    when {
        item == probeItem -> return true
        item < probeItem -> return binarySearch(item, 
                                                list.subList(0, probeIndex))
        else -> return binarySearch(item, 
                                    list.subList(probeIndex + 1, size))
    }
}
