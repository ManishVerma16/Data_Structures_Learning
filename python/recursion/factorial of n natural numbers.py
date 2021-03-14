#  Recursive program to find factorial of natural number

def fun(n):
    if n==0: return 1
    else:
        return fun(n-1)*n

n = int(input())
print(fun(n))