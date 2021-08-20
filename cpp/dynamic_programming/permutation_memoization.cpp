#include<iostream>
using namespace std;


int permutationWithMemoization(int arr[], int target, int n, int dp[]){
    int ans=0;
    if (target == 0) return dp[target] = 1;
    if (dp[target] != 0) return dp[target];
    for(int i=0; i<n; i++){
        if(target-arr[i]>=0){
            ans += permutationWithMemoization(arr, target-arr[i], n, dp);
        }
    }
    return dp[target]=ans;
}

int main(){
    int arr[] = {1, 4, 3, 2};
    int target = 5;
    int n = sizeof(arr)/sizeof(int);
    int dp[target+1] = {0};
    cout<< permutationWithMemoization(arr, target, n, dp)<<endl;
     for(int i=0; i<target+1; i++){
        cout << dp[i] << ' ';
    }
    return 0;
}