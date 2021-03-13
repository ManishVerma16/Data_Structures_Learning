#include <iostream>

using namespace std;

// tail recursion 
void fun1(int n)
{
    if (n > 0)
    {
        printf("%d ",n);
        fun1(n-1); // -> ascending output -> print at calling time
    }
}

// head recursion  
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n-1); // -> descending output -> print at returning time
        printf("%d ",n);
    }
}

int main()
{
    int x = 10;
    fun1(x);
    fun2(x);
    return 0;
}
