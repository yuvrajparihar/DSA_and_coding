#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n)
{
    int j, k;
    for (int i = 0; i < n - 1; i++)
    {
        k = i;
        j = i;
        while (j < n)
        {
            if (a[k] > a[j])
            {
                k = j;
            }
            j++;
        }
        swap(a[i], a[k]);
    }
}

int main()
{
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);

    int a[] = {10, 5, 8, 2, 4, 1}, n = 6;
    selectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
