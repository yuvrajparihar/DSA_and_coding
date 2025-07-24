#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
//max heap
void insert(int a[], int n)
{
    int temp = a[n], i = n;

    while (i / 2 >= 0 && a[(i - 1) / 2] < temp)
    {
        swap(a[i], a[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void create(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        insert(a, i);
    }
}
void Heapify(int k, int a[], int n)
{
    int j = 2 * k + 1;

    while (j < n)
    {
        if (j + 1 < n && a[j] < a[j + 1])
        {
            j = j + 1;
        }
        if (a[j] > a[k])
        {
            swap(a[j], a[k]);
            k = j;
            j = 2 * k + 1;
        }
        else
        {
            break;
        }
    }
}

void createHeapify(int a[], int n)
{
    int parent = n / 2 - 1;

    for (int i = parent; i >= 0; i--)
    {
        Heapify(i, a, n);
    }
}

void Delete(int a[], int n)
{
    int i = 0, j;
    int x = a[0];
    a[0] = a[n];
    j = 2 * i + 1;

    while (j < n)
    {

        if (a[j] < a[j + 1])
            j = j + 1;
        if (a[j] > a[i])
        {
            swap(a[i], a[j]);
            i = j;
            j = 2 * j + 1;
        }
        else
        {
            break;
        }
    }
    a[n] = x;
}
void heapSort(int a[], int n)
{

    for (int i = n - 1; i > 0; i--)
    {
        Delete(a, i);
    }
}

int main()
{
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);

    int a[] = {10, 20, 15, 30, 40};
    //    create(a,5);
    // print(a,5);
    //    Delete(a,5);
    //    print(a,5);
    //       Delete(a,4);
    //    print(a,5);
    //       Delete(a,3);
    //    print(a,5);
    //       Delete(a,2);
    //    print(a,5);
    //    heapSort(a,5);
    createHeapify(a, 5);
    print(a, 5);

    return 0;
}
