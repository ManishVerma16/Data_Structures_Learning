# Iterative program to generate Fibonacci series using swapping method.
def fibo(n):
    a,b,s = 0,1,0
    for i in range(2,n+1):
        s = a+b
        a = b
        b = s
    return s

number = int(input('Enter the number to get fibonacci series: '))
print(fibo(number))