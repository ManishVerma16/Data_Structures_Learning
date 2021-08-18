#include <iostream>

using namespace std;

int fibonacci_Tabulation(int num, int dp[]){
    for(int i=0; i<=num; i++)
    {
        if(i<=1){
            dp[i] = i;
        }
        else
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
    }
    return dp[num];

}

int main(){
    int num, res=0;
    cin>>num;
    int dp[num+1] = {0};
    res = fibonacci_Tabulation(num, dp);
    cout<< res<<endl;
    for(int i=0; i<(sizeof(dp)/sizeof(int)); i++){
        cout << dp[i] <<' ';
    }
}