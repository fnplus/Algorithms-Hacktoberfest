def quicksort(list)  
    return list if list.size <= 1  
    pivot = list.sample  
    left, right = list.partition { |e| e < pivot }  
    quicksort(left) + quicksort(right)  
end  