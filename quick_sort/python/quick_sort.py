"""  Created by SubCoder1 on 15-Oct-18.

     Sorting Technique -- Quick Sort
     Input             -- A sequence of n numbers
     Output            -- Reordered into a definite sequence {Ascending(HERE)}

     Time Complexity :-
        Worst Case - O(N^2)
        Best  Case - O(NLogN)  """

def q_sort(array) :
    if len(array) > 0 :
        left = list() ; right = list() ; equal = list()
        pivot = array[0]
        for element in array :
            if element < pivot : left.append(element)
            elif element > pivot : right.append(element)
            else : equal.append(element)
        return q_sort(left) + equal + q_sort(right)
    else :
        return array

array = list(map(int, input().split()))
print(*q_sort(array), end='')
