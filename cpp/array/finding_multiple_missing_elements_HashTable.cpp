// Program to find multiple missing element in an array using HashTable.


#include<bits/stdc++.h>
using namespace std;

void missingElements(int arr[], int n){
    int *h = new int[arr[n-1]+1]{0};
    for (int i = 0; i < n; i++)
    {
        h[arr[i]] += 1;
    }
        cout << "Missing elements are : " ;
    for (int i = arr[0]; i <arr[n-1]; i++)
    {
        if(h[i] == 0){
           cout << i << " ";
        }
    }
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
    missingElements(A, n);
    return 0;
}


// for (int i = 0; i <n; i++)
//     {
//         cout<< A[i];
//     }