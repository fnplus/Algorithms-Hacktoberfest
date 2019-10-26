def binary(l,k): 
 lb=0
 ub=len(l)-1
 while ub<lb:
  mid=(ub+lb)//2
  if l[mid]<k:
   lb=mid+1
  elif l[mid]>k:
   ub=mid
  else:
    return(mid)
 return -1
  
print("Enter the number of elements")
n=int(input())
l=[0]*n
ans=-1
print("Enter the sorted list of elements")
for i in range(n):
 l[i]=int(input())
print("Enter the element to search")
k=int(input())
r=0
r=binary(l,k)
if r!=-1:
    print("element is present at -")
    print(r)
else:
    print("not present")


