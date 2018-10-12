import sys
n = eval(input("Enter a number of fibbonaci numbers to show: "))
a, b = 0, 1
for i in range(n):
    a, b = b, a+b
    print(a, end='\n')