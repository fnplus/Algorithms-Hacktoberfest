def sel_sort(A):
    for i in range(len(A)): 
	    min_idx = i 
	    for j in range(i+1, len(A)): 
		    if A[min_idx] > A[j]: 
			    min_idx = j 
	    A[i], A[min_idx] = A[min_idx], A[i] 

array = list(map(int, input().split()))
# print(*sel_sort(array), end='')
sel_sort(array)
print("Sorted array is:")
for i in range(len(array)): 
    print("%d" %array[i])