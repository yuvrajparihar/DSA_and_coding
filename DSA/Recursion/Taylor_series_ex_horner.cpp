#include <bits/stdc++.h>
using namespace std;

float horner(float x, int n)
{
    static float s = 1;
    if (n == 0)
    {
        return s;
    }
    s = 1 + x * s / n;
    return horner(x, n - 1);
}

int main()
{
    cout << horner(2, 10);
    return 0;
}