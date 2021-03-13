// Recursive program to implement static variable


#include<iostream>
using namespace std;

int fun(int n){
    int static x;
    if(n>0){
        x += 1;
        return fun(n-1)+x;
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
