# tail recursion
# -> ascending output -> print at calling time
def fun1(n):
    if n>0:
        print(n, end=' ')
        fun1(n-1)

# head recursion
# descending output -> print at returning time

def fun2(n):
    if n>0:
        fun2(n-1)
        print(n, end=' ')

n = int(input())
fun1(n)
fun2(n)