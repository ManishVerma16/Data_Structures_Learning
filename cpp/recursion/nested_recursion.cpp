#include<iostream>

using namespace std;

/*
Nested recursion -> when in recursive function call the function is passed as an argument.
*/

int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}

int main()
{
    int x;
    cin >> x;
    cout << fun(x) << endl;
    return 0;
}
