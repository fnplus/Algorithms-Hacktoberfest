val = input("Enter your value: ") 
print(val) 
n=int(val) 
i=1
count=0
for i in range(1,n+1):
  if(n%i==0):
   count=count+1
print("THE AMOUNT OF DIVISORS IS - ")   
print(count)
