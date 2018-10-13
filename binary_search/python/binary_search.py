# Assuming the array is sorted in ascending order
def binarySearch(array, n):
    mid = len(array)/2
    if len(array) == 0:
        print("Element not found")
    elif array[mid] == n:
        print ("Element found")
    elif array[mid] > n:
        binarySearch(array[:mid], n)
    else:
        binarySearch(array[mid+1:], n)
