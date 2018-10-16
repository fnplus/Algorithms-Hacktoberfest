def b_Search(array, value):
    start = 0
    end = len(array)
    found = False
    pos = None
    while start <= end and not found :
        mid = (start + end) // 2
        if value == array[mid] : found = True ; pos = mid
        elif value < array[mid] : end = mid - 1
        else : start = mid + 1
    if found : print("Element found at Position {position}".format(position=pos+1))
    else : print("Element not in the list")

array = [3,4,5,6,7,8,9,10]
print("given list of numbers -- " + str(array))
val_to_be_searched = 10
print("Value to be searched -- " + str(val_to_be_searched))
b_Search(array,val_to_be_searched)
