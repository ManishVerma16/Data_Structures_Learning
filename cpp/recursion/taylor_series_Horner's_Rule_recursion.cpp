// Recursive program for taylor series using Honer's Rule which perform less multiplications.
#include<iostream>
using namespace std;

double e(int x, int n){
    static double s = 1;
    if(n==0){
        return s;
    }
    else{
        s = 1 + (x*s)/n;
        return e(x, n-1);
    }
}

int main()
{
    cout << e(1,10) << endl;
    return 0;
}
