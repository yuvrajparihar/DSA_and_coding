#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void merge(int arr[], int l, int h)
{
    int mid = (l + h) / 2;

    int i = 0, j = 0, k = l, a[mid + 1-l], b[h - mid];

    while (i <= mid-l)
    {
        a[i++] = arr[k++];
    }
    while (j < h - mid)
    {
        b[j++] = arr[k++];
    }
   
    i = 0, j = 0, k = l;

    while (i <= mid-l && j < (h - mid) && k <= h)
        {if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }}
      
    while (i <= mid-l)
    {  
        arr[k++] = a[i++];
    }
    while (j < (h - mid))
    {   
        arr[k++] = b[j++];
        
    }
   
}

void mergeSort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;

        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a, l, h);
    }
}

int main()
{
    freopen("D:/vscode/io/input.txt", "r", stdin);
    freopen("D:/vscode/io/output.txt", "w", stdout);

    int a[] = {10, 5, 8, 2, 4, 1}, n = 6;
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
