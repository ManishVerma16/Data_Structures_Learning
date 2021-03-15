// Combination nCr

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

int c(int n, int r){
    int c1, c2, c3;
    c1 = fact(n);
    c2 = fact(r);
    c3= fact(n-r);
    return c1/(c2*c3);
}

int main(){
    int n,r;
    cout << "Enter the values of n and r to get the combination: ";
    cin >> n>> r;
    cout << c(n,r) << endl;
    return 0;
}