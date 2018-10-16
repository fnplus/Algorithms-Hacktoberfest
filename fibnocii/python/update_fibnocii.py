def fibonacci():
    a, b = 0, 1
    while True:
        yield a            
        a, b = b, a + b

print("Enter Range -- ",end='')
Range = int(input())
print("Generated Fibonacci Sequence -- ")
for i,j in zip(range(Range), fibonacci()):
    print(j,end=' ')
