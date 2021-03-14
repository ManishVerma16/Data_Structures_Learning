# Recursive program to implement indirect recursion.

def funA(n):
    if(n>0):
        print(n, end=" ")
        funB(n-1)
    else:
        return 0

def funB(n):
    if (n>1):
        print(n, end=" ")
        funA(n//2)
    else:
        return 0


number = int(input("Enter any number: "))
print(funA(number))