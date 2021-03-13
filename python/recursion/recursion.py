def fun(n):
    if n>0:
        print(n, end=' ')
        fun(n-1)

n = int(input())
fun(n)