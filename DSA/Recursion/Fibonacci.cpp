#include <bits/stdc++.h>
using namespace std;

int loop(int n)
{
    int a = 0, b = 1, s = 0, i;

    for (i = 2; i <= n; i++)

    {
        s = a + b; //O(n)
        a = b;
        b = s;
    }
    return s;
}

int recursion(int n)
{
    if (n <= 0) //O(n^2)
        return n;
    return loop(n - 1) + loop(n - 2);
}

int F[10];

int memoization(int n)
{
    if (n <= 1) //O(n)
    {
        F[n] = n;
        return n;
    }

    else
    {
        if (F[n - 1] == -1)
        {
            F[n - 1] = memoization(n - 1);
        }
        if (F[n - 2] == -1)
        {
            F[n - 2] = memoization(n - 2);
        }
        cout<<F[n-1]<<" "<<memoization(n-1)<<endl;
        // F[n] = memoization(n - 1) + memoization(n - 2);
        F[n]=F[n - 1] + F[n - 2];
        return F[n - 1] + F[n - 2];
    }
}

int main()
{
    int n = 6, j;

    for (j = 0; j <= n; j++)
        ;
    {
        F[j] = -1;
    }
    cout << loop(n) << endl;
    cout << recursion(n) << endl;
    cout << memoization(n);
    return 0;
}