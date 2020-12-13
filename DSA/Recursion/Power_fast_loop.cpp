#include <iostream>
using namespace std;

int main()
{
    int m = 2;
    int n = 5;
    int t = m;
    while (n > 1) //not working
    {
        if (n % 2 == 0)
        {
            m = m * m;
            n = n / 2;
        }
    }
    if (n % 2 == 1)
        m = m * t;

    cout << m;
    return 0;
}