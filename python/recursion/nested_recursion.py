# Recursive program to implement the nested recursion

def nestedFun(n):
    if (n>100):
        return n-10
    else:
        return nestedFun(nestedFun(n+11))

number=int(input("Enter any number: "))
print(nestedFun(number))