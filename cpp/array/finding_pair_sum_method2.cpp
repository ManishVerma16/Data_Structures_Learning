// Program to find the pair with sum k such that a+b = k in a given sorted array.
/*
Approach -> Two pointers approach
take two pointer i=0 and j=last-1 then find arr[i]+arr[j].
if arr[i]+arr[j] == k  then print the pair arr[i], arr[j] and i++, j--
if arr[i]+arr[j] < k then i++ 
if arr[i]+arr[j] > k then j--;
*/

#include<bits/stdc++.h>
using namespace std;

void printPair(int arr[], int n, int k){
    int i = 0, j=n-1;
    sort(arr, arr+n);
    while(i<j){
        if(arr[i]+arr[j]==k){
            cout << "Pair with sum "<<k<<" found ("<< arr[i] << ", "<<arr[j]<<")"<<endl;
            i++;
            j--;
        }
        else if (arr[i]+arr[j] <k){
            i++;
        }
        else{
            j--;
        }
    }
}
    

int main(){
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
