# Recursive program to find the taylor series upto n terms.

def e(x,n):
    e.p,e.f = 1,1
    if n==0:
        return 1
    else:
        res = e(x, n-1)
        e.p = e.p*x
        e.f = e.f*n
        return res+(e.p/e.f)


print(e(4, 15))