#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left = NULL;
    node *right = NULL;
};

void insert(node *p, int key)
{
    node *t;
    while (p != NULL)
    {
        t = p;
        if (p->data == key)
            return;
        else if (key < p->data)
            p = p->left;
        else
        {
            p = p->right;
        }
    }
    node *temp = new node();
    temp->data = key;
    if (key < t->data)
        t->left = temp;
    else
    {
        t->right = temp;
    }
}

node* rinsert(node *p,int key){
    if(p==NULL){
        node *t=new node();
        t->data=key;
        return t;
    }
    else if(key<p->data)
     p->left=rinsert(p->left,key);
     else
     {
         p->right=rinsert(p->right,key);
     }
     return p;
}

node* create(int a[],int n){
     node *root=new node();
     root->data=a[0];
     for(int i=1;i<n;i++)
     rinsert(root,a[i]);
    return root;
}

void inorder(node *t){
    if(t!=NULL){
        inorder(t->left);
        cout<<t->data<<" ";
        inorder(t->right);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
    //    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    node *x= create(a,n);
    inorder(x);
    // cout<<x->data;
    return 0;
}
