# Recursive program to find the Combination of nCr

# Concept of Pascal's Tree

def C(n,r):
    if r==0 or n==r:
        return 1
    else:
        return C(n-1, r-1) + C(n-1, r)

print('Enter the values of n and r to get the combination: ',end='')
n, r = map(int,input().split())
print(C(n,r))