#include<iostream>
using namespace std;

int permutationWithTabulation(int arr[], int x, int n, int dp[]){
    for(int target=0; target<x; target++){
        int ans=0;
        if (target == 0) {
            dp[target] = 1; 
            continue;
        }
        for(int i=0; i<n; i++){
            if(target-arr[i]>=0){
                ans += dp[target-arr[i]];
            }
        }
        dp[target] = ans;
    }
    return dp[x-1];
}

int main(){
    int arr[] = {1, 4, 3, 2};
    int target = 5;
    int n = sizeof(arr)/sizeof(int);
    int dp[target+1] = {0};
    cout<< permutationWithTabulation(arr, target+1, n, dp)<<endl;
     for(int i=0; i<target+1; i++){
        cout << dp[i] << ' ';
    }
    return 0;
}