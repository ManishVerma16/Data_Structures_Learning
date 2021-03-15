// Recursive program to generate Fibonacci series using memoization.

#include<iostream>
using namespace std;

int F[10];
int fibo(int n){
    if (n<=1){
        F[n] = n;
        return n;
    }
    else{
        if (F[n-2]==-1)
        {
            F[n-2] = fibo(n-2);
        }
        if(F[n-1]==-1){
            F[n-1] = fibo(n-1);
        }
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}

int main()
{
    int x;
    cout << "Enter the number to get fibonacci series: ";
    cin >>x;
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    
    cout << fibo(x) << endl;
    return 0;
}
