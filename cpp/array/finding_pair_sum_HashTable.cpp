// Program to find the pair with sum k such that a+b = k in a given sorted array.
/* Approach -> find the value k-arr[i] and in hash table check whether it is set to 1 or not 
 if it is 1 then print arr[i] and k-arr[i] as the sum pair.

 ex: k = 10, arr = {6 3 8 10 16 7 5 2 9 14 }
 arr[0] = 6  and k-arr[0] = 4  so if h[4] == 1 then print 6 and 4 else set h[4] = 1.

*/
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
