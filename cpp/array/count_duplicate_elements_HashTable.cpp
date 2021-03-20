// Program to find the duplicate element and their count in a sorted or unsoted array using Hashing technique.
/* Basic approach
1. sort the given array and the store the count of each element in hash table according to the value of element.
*/

#include<bits/stdc++.h>
using namespace std;

void countDuplicate(int arr[], int n){
    sort(arr, arr+n);
    int *h = new int[arr[n-1]+1]{0};
    for (int i = 0; i < n; i++)
    {
        h[arr[i]] += 1;
    }
    for (int i = 0; i <=arr[n-1]; i++)
    {
        if(h[i] > 1){

        cout << "Duplicate element: " << i << " frequency: " <<h[i]<< endl;
        }
    }
    
    
}

int main()
{
    int n, duplicate;
    cout << "Number of element in the array: ";
    cin>> n;
    int A[n];
    cout << "Enter the element of array: ";
    for (int i = 0; i <n; i++)
    {
        cin >> A[i];
    }
    countDuplicate(A, n);
    return 0;
}
