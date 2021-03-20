// Program to find the duplicate element in a sorted and unsoted array.
/* Basic approach
1. sort the given array and the compare the adjacent element.
*/

#include<bits/stdc++.h>
using namespace std;

void countDuplicate(int arr[], int n){
    int lastDuplicate = 0, j=0;   // stores the last obtained duplicate
    sort(arr, arr+n);
    for (int i = 0; i <n; i++)
    {
        if(arr[i] == arr[i+1]){
            j = i+1;
            while(arr[i] == arr[j])
            {
                j++;
            }
            cout << "Duplicate number is: " << arr[i] <<" frequency: "<<j-i<<endl;
            i = j-1;            
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
