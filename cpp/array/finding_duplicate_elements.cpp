// Program to find the duplicate element in a array.
/* Basic approach
1. sort the given array and the compare the adjacent element.
2. it only work for two duplicates only.
*/

#include<bits/stdc++.h>
using namespace std;

void duplicateElement(int arr[], int n){
    sort(arr, arr+n);
    for (int i = 0; i <n; i++)
    {
        if(arr[i] == arr[i+1]){
            cout <<"Duplicate element is: " <<arr[i] << endl;
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
    duplicateElement(A, n);
    return 0;
}
