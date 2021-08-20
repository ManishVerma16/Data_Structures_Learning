#include<iostream>
using namespace std;

int unboundKnapsackWithRecursion(int wt[], int val[], int cap, int n){
    int ans = 0;
    if (cap == 0) return 0;
    for(int i=0; i<n; i++){
        if (cap-wt[i] >= 0){
            ans = max(ans, unboundKnapsackWithRecursion(wt, val, cap-wt[i], n) + val[i]);
        }
    }
    return ans;
}

int main(){
    int wt[4] = {1, 4, 3, 5};
    int val[4] = {10, 40, 50, 70};
    int cap = 5;
    int n = sizeof(wt)/sizeof(int);
    cout << unboundKnapsackWithRecursion(wt, val, cap, n)<<endl;
    return 0;
}