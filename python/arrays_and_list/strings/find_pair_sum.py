'''
Program to find the pair with sum k such that a+b = k
Basic Brute Force approach -> add each element with other element until sum equal to k is obtained.

'''

def pairSum(arr, k):
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if(arr[i]+arr[j]==k):
                print("Pair with sum " + str(k) + " found ("+ str(arr[i]) + ", " + str(arr[j])+ ")")



n,k = map(int, input("Number of element in the array and sum value: ").split())
arr = list(map(int, input("Enter the element of array: ").split()))
pairSum(arr, k)