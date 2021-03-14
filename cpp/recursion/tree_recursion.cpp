#include <iostream>

using namespace std;

/*
Tree recursion -> when there is recursive function calling is happening more than one time.


*/
void fun1(int n)
{
    if (n > 0)
    {
        cout << n <<" ";
        fun1(n-1);
        fun1(n-1); 
    }
}


int main()
{
    int x = 10;
    fun1(x);
    return 0;
}
