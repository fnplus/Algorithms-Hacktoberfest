# add your code here
def binary_search(ordered_list, target_val):
    low = 0
    high = len(ordered_list)

    while low <= high:

        pivot = (len(ordered_list))/2
        if ordered_list[pivot] == target_val:
            return pivot
        if target_val < ordered_list[pivot]:
            high = pivot - 1

        if target_val > ordered_list[pivot]:
            low = pivot + 1

        else:
            print ("value not in our list")
            return -1

    arr = [7, 10, 16, 28, 34, 40]
    search_val = 7
    result = binary_search(arr, search_val)

    if result == -1:
        print "The value your looking for is not here"
    else:
        print "The search value is at element %d"
