// Iterative program to generate Fibonacci series using swapping method.

#include<iostream>
using namespace std;

int fibo(int n){
    int a = 0, b=1, s=0, i;
    for (i = 2; i <=n; i++)
    {
        s = a+b;
        a = b;
        b = s;
    }
    return s;
}

int main()
{
    int x;
    cin>>x;
    cout << fibo(x) << endl;
    return 0;
}
