#  Recursive program to find sum of natural number

def fun(n):
    if n>0:
        return fun(n-1)+n
    else: return 0

n = int(input())
print(fun(n))