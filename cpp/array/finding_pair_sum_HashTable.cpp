// Program to find the pair with sum k such that a+b = k
// Basic Brute Force approach -> add each element with other element until sum equal to k is obtained.

#include<bits/stdc++.h>
using namespace std;

void printPair(int arr[], int n, int k){
    int mini = *min_element(arr, arr+n);
    int maxi = *max_element(arr, arr+n);
    int *h = new int[maxi+1]{0};
    for (int i = 0; i < n; i++)
    {
        if(h[k-arr[i]]!= 0 && k-arr[i]>0){
            cout << "Pair with sum "<<k<<" found ("<< arr[i] << ", "<< k-arr[i]<<")"<<endl;   
        }
        else{
            h[arr[i]] = 1;
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
