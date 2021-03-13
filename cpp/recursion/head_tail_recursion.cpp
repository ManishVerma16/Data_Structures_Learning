#include <iostream>

using namespace std;


/*
Head recursion -> when there is no operation done before function call or
function call is the first statement of recursive function block.

All the other operation execute after the function calls.

It means function does not perform anything before calling but it execute everything 
at returning time.

*/
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n-1); 
        printf("%d ",n);
    }
}

int main()
{
    int x = 10;
    fun2(x);
    return 0;
}
