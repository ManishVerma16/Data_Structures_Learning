#include<iostream>
using namespace std;

int unboundKnapsackWithTabulation(int wt[], int val[], int n, int dp[], int x){
    for(int cap=0; cap<n; cap++){
        int ans = 0;
        if (cap == 0) {
            dp[cap]=cap;
            continue;
        }
        if (dp[cap] != 0) return dp[cap];
        for(int i=0; i<n; i++){
            if (cap-wt[i] >= 0){
                ans = max(ans, dp[cap-wt[i]] + val[i]);
            }
        }
        dp[cap] = ans;
    }
    return dp[n-1];
}

int main(){
    int wt[4] = {1, 4, 3, 5};
    int val[4] = {10, 40, 50, 70};
    int cap = 5;
    int dp[cap+1]= {0};
    cout << unboundKnapsackWithTabulation(wt, val, cap+1, dp, sizeof(wt)/sizeof(int))<<endl;
    for(int i=0; i<(sizeof(dp)/sizeof(int)); i++){
        cout << dp[i] <<' ';
    }
    return 0;
}