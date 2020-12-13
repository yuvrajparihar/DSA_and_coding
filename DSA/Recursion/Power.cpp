#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow(m, n - 1) * m;
    }
}

int pow_fast(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return pow_fast(m * m, n / 2);
    return m * pow_fast(m * m, (n - 1) / 2);
}

int main()
{
    cout << pow(3, 2) << endl;
    cout << pow_fast(2, 9);
    return 0;
}