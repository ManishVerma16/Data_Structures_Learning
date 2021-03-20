// Program to find the single missing element in a sorted array
// here the elements are first n natural numbers

#include<bits/stdc++.h>
using namespace std;

int missingElement(int arr[], int n){
    int sum = 0, total=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    total = (arr[n-1]*(arr[n-1]+1))/2;
    return total-sum;
    
}

int main()
{
    int n, missing=0;
    cout << "Number of element in the array: ";
    cin>>n;
    int A[n];
    cout << "Enter the element of array: ";
    for (int i = 0; i <n; i++)
    {
        cin >> A[i];
    }
    missing = missingElement(A, n);
    cout << "Missing element is: " << missing<<endl;
    return 0;
}

// for (int i = 0; i <n; i++)
//     {
//         cout<< A[i];
//     }