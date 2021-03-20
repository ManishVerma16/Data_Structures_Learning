'''
Program to find the pair with sum k such that a+b = k in a given sorted array.

Approach -> Two pointers approach
take two pointer i=0 and j=last-1 then find arr[i]+arr[j].
if arr[i]+arr[j] == k  then print the pair arr[i], arr[j] and i++, j--
if arr[i]+arr[j] < k then i++ 
if arr[i]+arr[j] > k then j--;


'''

def pairSum(arr, k):
    arr.sort()
    i, j = 0, len(arr)-1
    while(i<j):
        if(arr[i]+arr[j]==k):
            print("Pair with sum " + str(k) + " found ("+ str(arr[i]) + ", " + str(arr[j])+ ")")
            i += 1
            j -= 1
        elif(arr[i]+arr[j] < k):
            i += 1
        else:
            j -= 1



n,k = map(int, input("Number of element in the array and sum value: ").split())
arr = list(map(int, input("Enter the element of array: ").split()))
pairSum(arr, k)