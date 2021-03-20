// Program to find the missing element in a sorted array
// here the elements are natural numbers
#include<bits/stdc++.h>
using namespace std;

void missingElements(int arr[], int n){
    int i=0, diff=0;
    diff = arr[i] - i;
    for(i=0; i<n; i++){
        if(arr[i]-i != diff){
                cout<<"Missing element is: " <<i+diff<<endl;
                break;
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