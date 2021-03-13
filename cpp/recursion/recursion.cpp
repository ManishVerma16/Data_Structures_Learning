#include <iostream>

using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        printf("%d ",n);
        fun(n-1);
    }
}

int main()
{
    int x = 10;
    fun(x);
    return 0;
}
