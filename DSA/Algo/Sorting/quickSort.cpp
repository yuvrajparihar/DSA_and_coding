#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void swapp(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int l, int h)
{

    int pivot = arr[l];
    int i = l, j = h;

    while (i < j)
    {
        do
        {
            i++;
        } while (pivot > arr[i]);
        
        do
        {
            j--;
        } while (pivot < arr[j]);

        if (i < j)
            swapp(&arr[i], &arr[j]);
    }
    swapp(&arr[l], &arr[j]);
    return j;
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int j = partition(arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j + 1, h);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif

    int arr[] = {5, 7, 3, 6, 2, 1, 4};

    quickSort(arr,0,7);
    // partition(arr, 0, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
