#include <iostream>

using namespace std;

int fibonacciRecursion(int num){
    if (num <= 1) {
        return num;
    }
    int left = fibonacciRecursion(num-1);
    int right = fibonacciRecursion(num-2);
    return left+right;

}

int main(){
    int num, res=0;
    cin>>num;
    res = fibonacciRecursion(num);
    cout<< res<<endl;
}