def insertionSort(l): 
    for i in range(1, len(l)): 
        key = l[i] 
        j = i-1
        while j >=0 and key < l[j] : 
                l[j+1] = l[j] 
                j -= 1
        l[j+1] = key 
  
# TEST YOUR CODE BY CHANGING list l
l = [12, 11, 13, 5, 6] 
insertionSort(l) 
print (*l) 
