# Combination of nCr by finding factioral for n, r and n-r

def fact(n):
    if n==0: return 1
    else:
        return fact(n-1)*n

def C(n,r):
    c1 = fact(n)
    c2 = fact(r)
    c3 = fact(n-r)
    return c1//(c2*c3)

print('Enter the values of n and r to get the combination: ',end='')
n, r = map(int,input().split())
print(C(n,r))