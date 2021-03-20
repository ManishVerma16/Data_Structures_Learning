// Program to find the min and max in a single scan of array
/*
Approach -> compare the values of arr with min value and max value.
*/


#include<bits/stdc++.h>
using namespace std;

void minMax(int arr[], int n){
    int mini = arr[0];
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] < mini){
            mini = arr[i];
        }
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout << "Minimum value: "<< mini << " Maximum value: "<<maxi<<endl;
}

int main()
{
    int n;
    cout << "Number of element in the array: ";
    cin>> n;
    int A[n];
    cout << "Enter the element of array: ";
    for (int i = 0; i <n; i++)
    {
        cin >> A[i];
    }
    minMax(A, n);
    return 0;
}