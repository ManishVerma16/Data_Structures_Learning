'''
Program to find the min and max in a single scan of array
Approach -> compare the values of arr with min value and max value.
'''

def minMax(arr):
    mini, maxi = arr[0], arr[0]
    for i in range(len(arr)):
        if arr[i] < mini:
            mini = arr[i]
        elif arr[i] > maxi:
            maxi = arr[i]
    
    print("Minimum value: "+ str(mini) + " Maximum value: "+ str(maxi))

n = int(input("Number of element in the array: "))
arr = list(map(int, input("Enter the element of array: ").split()))
minMax(arr)