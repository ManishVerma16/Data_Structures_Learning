// Program to find the duplicate element in an unsorted array.
/* Basic approach
1. compare the element with rest of elements and if same element is found mark it as -1.
*/

#include <bits/stdc++.h>
using namespace std;

void duplicateElement(int arr[], int n)
{
    int count;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        if(arr[i] != -1){
            for (int j= i+1; j < n; j++)
            {
                if(arr[i]== arr[j]){
                    count += 1;
                    arr[j] = -1;
                }
            }
        }
        if(count >1)
            cout << " Count: "<< count << " Element: "<<arr[i];
    }
}

int main()
{
    int n, duplicate;
    cout << "Number of element in the array: ";
    cin >> n;
    int A[n];
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    duplicateElement(A, n);
    return 0;
}
