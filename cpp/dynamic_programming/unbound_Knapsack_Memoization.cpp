#include<iostream>
using namespace std;

int unboundKnapsackWithMemoization(int wt[], int val[], int cap, int n, int dp[]){
    int ans = 0;
    if (cap == 0) return dp[cap]=cap;
    if (dp[cap] != 0) return dp[cap];
    for(int i=0; i<n; i++){
        if (cap-wt[i] >= 0){
            ans = max(ans, unboundKnapsackWithMemoization(wt, val, cap-wt[i], n, dp) + val[i]);
        }
    }
    return dp[cap]=ans;
}

int main(){
    int wt[4] = {1, 4, 3, 5};
    int val[4] = {10, 40, 50, 70};
    int cap = 5;
    int dp[cap+1]= {0};
    int n = sizeof(wt)/sizeof(int);
    cout << unboundKnapsackWithMemoization(wt, val, cap, n, dp)<<endl;
    for(int i=0; i<(sizeof(dp)/sizeof(int)); i++){
        cout << dp[i] <<' ';
    }
    return 0;
}