def binarySearch(array, value):
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

print("Enter the Sequence of elements -- ", end='')
data = list(map(int, input().split()))
data.sort()
print("Enter the element to be searched in the data given -- ", end='')
val = int(input())
binarySearch(data,val)
