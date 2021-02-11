#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

//radix sort code
//merge code both
//iterative quicksort
struct node
{
    int data;
    node *next;
}; 


node *newNode(int data)
{
    node *t = new node();
    t->data = data;
    t->next=NULL;
    return t;
}
//using linked list as bins
void llbucketSort(int arr[], int n)
{
    int m = *max_element(arr, arr + n) + 1;
   
    vector<node*> v(m, NULL);
    for (int i = 0; i < n; i++)
    {
        if (v[arr[i]] == NULL)
        {    
            v[arr[i]] = newNode(arr[i]);
                   
        }
        else
        {   
            node *t = v[arr[i]];
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = newNode(arr[i]);
        }
    }


    for (int i = 0; i < m; i++)
    {
        if (v[i]!=NULL)
        {  
            node *t = v[i];
            while (t!=NULL)
            {   
                cout << t->data << " ";
                t = t->next;
            }
          
        }
    }
}
//using vector as bins
void bucketSort(int arr[], int n)
{
    int m = *max_element(arr, arr + n) + 1;
    vector<int> v[m]; //declares m vectors

    for (int i = 0; i < n; i++)
    {
        v[arr[i]].push_back(arr[i]);
    }

    int index = 0;
    for (int i = 0; i < m; i++)
    {
        if (v[i].size())
        {
            for (int j = 0; j < v[i].size(); j++)
                arr[index++] = v[i][j];
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/vscode/io/input.txt", "r", stdin);
    freopen("D:/vscode/io/output.txt", "w", stdout);
#endif

    int a[] = {10, 5, 8, 2, 4, 1,1}, n = 7;
    // int a[] = {1, 1, 1, 1, 1, 1}, n = 6;
    // bucketSort(a, n);
    llbucketSort(a,n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    return 0;
}
