// Recursive program to find the power of a given number.

#include <iostream>
using namespace std;

int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return power(m, n - 1) * m;
    }
}


// faster approach to find the power of the given number
int power1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return power1(m * m, n / 2);
    }
    else
    {
        return power(m*m, (n - 1) / 2) * m;
    }
}

int main()
{
    int number, pow;
    cout << "Enter number and power: ";
    cin >> number >> pow;
    cout << power(number, pow) << endl;
    return 0;
}
