// Iterative program for taylor series using Honer's Rule which perform less multiplications.
#include<iostream>
using namespace std;

double e(int x, int n){
    double s = 1;
    for (; n>0; n--)
    {
        s = 1 + (x*s)/n;
    }
    return s;

}

int main()
{
    cout << e(1,10) << endl;
    return 0;
}
