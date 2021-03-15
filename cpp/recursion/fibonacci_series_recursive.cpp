// Recursive program to generate Fibonacci series.

#include<iostream>
using namespace std;

int fibo(int n){
    if (n<=1){
        return n;
    }
    else{
        return fibo(n-2)+fibo(n-1);
    }
}

int main()
{
    int x;
    cout << "Enter the number to get fibonacci series: ";
    cin >>x;
    cout << fibo(x) << endl;
    return 0;
}
