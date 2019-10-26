# Python program for implementation of Insertion Sort 
  
# Function to do insertion sort 
def insertion_Sort(arr): 
  
    # Traverse through 1 to length of array 
    for i in range(1, len(arr)): 
        key = arr[i]
        j = i-1
        while j >= 0 and key < arr[j] : 
            arr[j + 1] = arr[j] 
            j -= 1
        arr[j + 1] = key 

# Driver code to test above 
arr = [12, 11, 13, 5, 6] 
insertion_Sort(arr) 
for i in range(len(arr)): 
    print ("% d" % arr[i]) 
