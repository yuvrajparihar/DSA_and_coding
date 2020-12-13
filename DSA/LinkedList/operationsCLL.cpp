#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
node *head = NULL;
void create(int a[], int n)
{
    node *p, *temp;
    head = new node();
    head->data = a[0];
    head->next = head;
    temp = head;

    for (int i = 1; i < n; i++)
    {
        p = new node();
        p->data = a[i];
        p->next = head;
        temp->next = p;
        temp = p;
    }
}
void display(node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    } while(p!=head);
}
void recursiveDisplay(node *p){
    if(p->next!=head){
         cout<<p->data<<" ";
         recursiveDisplay(p->next);
    }
    else{
         cout<<p->data<<" ";
    }
}

int main()
{
    freopen("D:/OneDrive/vscode/io/input.txt", "r", stdin);
    freopen("D:/OneDrive/vscode/io/output.txt", "w", stdout);

    int arr[] = {2, 1, 3, 4, 6};
    create(arr, 5);
    // display(head);
    recursiveDisplay(head);
  return 0;
}
