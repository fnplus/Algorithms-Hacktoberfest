# Function to return gcd of a and b 

def gcd(num_1, num_2):  
    if num_1 == 0 : 
        return num_2  
      
    return gcd(num_2 % num_1, num_1) 
  
print("Enter the 1st number -- , end='')
num_1 = int(input())
print("Enter the 2nd number -- , end='')
num_2 = int(input())

print("gcd of {} and {} -> ".format(num_1,num_2), gcd(num_1, num_2) ,end='')
