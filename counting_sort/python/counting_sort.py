"""   Sorting Technique -- Counting Sort
      Input             -- A range(Max element in the seq. of array + 1) and a sequence of n numbers
      Output            -- Reordered into a definite sequence {Ascending(HERE)}

      Time Complexity :-
         Worst Case - O(N^2)
         Best  Case - O(N + RANGE)   """



print("Enter Range -- ",end='')
Range = int(input())
arr = list(map(int, input().split()))
buckets = [0]*Range
sortedIndex = 0

for i in arr :
    buckets[i] += 1
for index in range(len(buckets)) :
    while buckets[index] > 0 :
        arr[sortedIndex] = index
        sortedIndex += 1
        buckets[index] -= 1
print("Sorted Output -- ", end='')
print(' '.join([str(x) for x in arr]))
