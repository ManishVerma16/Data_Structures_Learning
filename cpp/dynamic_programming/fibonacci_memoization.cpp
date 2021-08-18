#include <iostream>

using namespace std;

int fibonacciMemoization(int num, int dp[]){
    if (num <= 1) {
        return dp[num]=num;
    }
    if(dp[num]!=0){
        return dp[num];
    }
    int left = fibonacciMemoization(num-1, dp);
    int right = fibonacciMemoization(num-2, dp);
    return dp[num]=left+right;

}

int main(){
    int num, res=0;
    cin>>num;
    int dp[num+1] = {0};
    res = fibonacciMemoization(num, dp);
    cout<< res<<endl;
    for(int i=0; i<(sizeof(dp)/sizeof(int)); i++){
        cout << dp[i] <<' ';
    }
}