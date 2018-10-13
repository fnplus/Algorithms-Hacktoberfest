# Assuming the array is sorted in ascending order
def binarySearch(array, n):
    size = len(array)/2
    if len(array) == 0:
        print("Element not found")
    elif array[size] == n:
        print ("Element found")
    elif array[size] > n:
        binarySearch(array[:size], n)
    else:
        binarySearch(array[size+1:], n)
        