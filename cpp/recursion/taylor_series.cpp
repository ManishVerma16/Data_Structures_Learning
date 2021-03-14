// Recursive program to find the taylor series upto n terms.
#include<iostream>

using namespace std;

double e(int x, int n){
    static double p=1, f=1;
    double res;
    if(n==0){
        return 1;
    }
    else{
        res = e(x, n-1);
        p *= x;
        f *= n;
        return res+(p/f);
    }
}

int main()
{
    cout << e(1,10)<<endl;
    return 0;
}
