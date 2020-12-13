#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};
node *head = NULL;

void create(int arr[], int n)
{
    node *t, *p;
    head = new node();
    head->data = arr[0];
    head->prev = NULL;
    head->next = NULL;
    p = head;

    for (int i = 1; i < n; i++)
    {
        t = new node();

        t->data = arr[i];
        p->next = t;
        t->prev = p;
        t->next = NULL;

        p = t;
    }
}

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    freopen("D:/OneDrive/vscode/io/input.txt", "r", stdin);
    freopen("D:/OneDrive/vscode/io/output.txt", "w", stdout);
    int a[] = {1, 2, 3, 4, 5, 6};
    create(a, 6);
    display(head);

    return 0;
}
