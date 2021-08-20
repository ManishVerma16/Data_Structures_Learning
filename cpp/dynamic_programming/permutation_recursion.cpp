#include<iostream>
using namespace std;


int permutationWithRecursion(int arr[], int target, int n){
    int ans=0;
    if (target == 0) return 1;
    for(int i=0; i<n; i++){
        if(target-arr[i]>=0){
            ans += permutationWithRecursion(arr, target-arr[i], n);
        }
    }
    return ans;
}

int main(){
    int arr[] = {1, 4, 3, 2};
    int target = 5;
    int n = sizeof(arr)/sizeof(int);
    cout<< permutationWithRecursion(arr, target, n);
    return 0;
}