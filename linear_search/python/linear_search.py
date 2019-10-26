def search(arr, x): 
    for i in range(len(arr)): 
        if arr[i] == x: 
            return i 
    return -1
arr=[10,20,3,4]
x=20
print(arr)
if(search(arr,x)==1):
    print("Element found")
else:
    print("not found")