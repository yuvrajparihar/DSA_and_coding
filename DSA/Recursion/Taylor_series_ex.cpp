#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
    {
        return factorial(n - 1) * n;
    }
}

float fun(int n, int x)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return fun(n - 1, x) + (pow(x, n) / factorial(n));
}

int main()
{
    cout << fun(10, 3);
    return 0;
}