def binary_search(ordered_list,low,high,target_value):
    
    while (low<= high):
        
        midpoint =(low+high)/2
        
        if target_value == ordered_list[midpoint]:
            return midpoint
        
        elif target_value > ordered_list[midpoint]:
            low = midpoint+1
            
        elif target_value < ordered_list[midpoint]:
            high = midpoint-1
        
    print ("\nYour search value is not in our list.")
    return -1
    
while (True):
    arr = []
    n = int(raw_input('Enter how many elements you want: '))
    print 'Enter your inputs '
    
    for i in range(0, n):
        arr.append(input())
    print(arr)

    search_val =  int(raw_input('Enter a number to search for in the list '))
    low = 0
    high = len(arr)-1

    result = binary_search(arr,low,high,search_val)
    if result != -1:
        print "\nSuccess! The search value is at element " + str(result)

    terminate = (raw_input('\nEnter y to search again, or x to exit. '))

    if terminate == 'x':
        break
    if terminate == 'y':
        continue
