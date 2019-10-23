print("Enter the number of elements")
n=int(input())
l=[0]*n
ans=-1
print("Enter the elements")
for i in range(n):
 l[i]=int(input())
print("Enter the element to search")
k=int(input())
for  i in range(n):
 if k==l[i]:
  ans=i
if ans==-1:
 print ("Element not found")
else:
 print("The position of the element is : ")
 print(ans+1)
