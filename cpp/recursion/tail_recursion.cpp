#include <iostream>

using namespace std;

/*
Tail recursion -> when there is no expression remain unexecuted after function call or 
function calling is the last statement of recursive function.

All operation of function block can be execute at calling time and function will not perform
anything at the returning time.


*/
void fun1(int n)
{
    if (n > 0)
    {
        printf("%d ",n);
        fun1(n-1); 
    }
}


int main()
{
    int x = 10;
    fun1(x);
    return 0;
}
