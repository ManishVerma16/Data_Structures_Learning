# Recursive program to find the power of a given number.

def power(m,n):
    if n == 0:
        return 1
    else:
        return power(m, n - 1) * m

# faster approach to find the power of the given number.
def power1(m,n):
    if n == 0:
        return 1
    if n%2==0:
        return power1(m*m, n//2)
    else:
        return power1(m*m, (n - 1)//2) * m


number, pow = input("Enter the number and power: ").split()
print(power(int(number), int(pow)))