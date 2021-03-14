// Recursive program to find the taylor series upto n terms.
#include<iostream>

using namespace std;

double e(int x, int n){
    double p=1, f=1,res=1;
    int i;
    for(i=1;i<=n;i++){
        p *= x;
        f *= i;
        res += (p/f);
    }
    return res;
}

int main()
{
    cout << e(1,10)<<endl;
    return 0;
}
