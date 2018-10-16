def b_Search(array, value):
    sTart = 0
    eNd = len(array)
    found = False
    pos = None
    while sTart <= eNd and not found :
        mid = (sTart + eNd) // 2
        if value == array[mid] : found = True ; pos = mid
        elif value < array[mid] : end = mid - 1
        else : start = mid + 1
    if found : print("Element found at Position {position}".format(position=pos+1))
    else : print("Element not in the list")

print("Enter the Sequence of elements -- ", end='')
data = list(map(int, input().split()))
data.sort()
print("Enter the element to be searched in the data given -- ", end='')
element = int(input())
b_Search(data,element)
