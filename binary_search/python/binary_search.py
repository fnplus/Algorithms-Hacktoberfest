def binary_search(ordered_list,low,high,target_value):
    
    while (low<= high):
        
        midpoint =(low+high)/2
        
        if target_value == ordered_list[midpoint]:
            return midpoint
        
        elif target_value > ordered_list[midpoint]:
            low = midpoint+1
            
        elif target_value < ordered_list[midpoint]:
            high = midpoint-1
        
    print ("Your search value is not in our list. Please try again.")
    return -1
    
arr = [7, 10, 16, 28, 34, 40]

search_val = 17
low = 0
high = len(arr)-1

result = binary_search(arr,low,high,search_val)
if result != -1:
    print "Success! The search value is at element " + str(result)
