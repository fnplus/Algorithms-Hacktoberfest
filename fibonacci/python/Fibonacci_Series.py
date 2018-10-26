aString= input("Enter the number of length:")
a=int(aString)


def fibonacci1(n):        #Fibonacci Series by recursion
    if n==1 or n==2:
        return 1
    return fibonacci1(n-1) + fibonacci1(n-2)

def fibonacci2(n):        #Fibonacci series by Loop
    a,b =0, 1
    for i in range(n-1):
        a,b = b, a+b
    return a

print("Fibonacci Series by recursion")
for i in range(1,a):
    print(fibonacci1(i))



print("\nFibonacci Series by Loop")
for i in range(1,a):
    print(fibonacci2(i))