// Recursive program to find sum of natural number

#include<iostream>
using namespace std;

int fun(int n){
    if(n>0){
        return fun(n-1)+n;
    }
    else{
        return 0;
    }
}

int main()
{
    int x, sum=0;
    cin>>x;
    sum = fun(x);
    cout << sum<<endl;
    return 0;
}
