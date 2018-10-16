#binary search in a sorted list

def binary_search(lst, left, right, x):
    if (right >= left):
        mid = left + (right - left)/2
        if (lst[mid] == x):
            return mid
        elif (lst[mid] > x):
            return binary_search(lst, left, mid-1, x)
        elif(lst[mid] < x):
            return binary_search(lst, mid+1, right, x)
    else:
        return -1

lst = [1,10, 100, 1000, 10000]
print binary_search(lst, 0, len(lst) -1, 90)
