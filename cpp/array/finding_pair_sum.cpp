// Program to find the pair with sum k such that a+b = k
// Basic Brute Force approach -> add each element with other element until sum equal to k is obtained.

#include<bits/stdc++.h>
using namespace std;

void printPair(int arr[], int n, int k){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == k){
                cout << "Pair with sum "<<k<<" found ("<< arr[i] << ", "<< arr[j]<<")"<<endl;
            }
        }
        
    }
    
    
}

int main()
{
    int n,k;
    cout << "Number of element in the array and sum value: ";
    cin>> n >> k;
    int A[n];
    cout << "Enter the element of array: ";
    for (int i = 0; i <n; i++)
    {
        cin >> A[i];
    }
    printPair(A, n, k);
    return 0;
}
