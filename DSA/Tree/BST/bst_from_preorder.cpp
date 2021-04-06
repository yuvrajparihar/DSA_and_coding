#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left = NULL;
    node *right = NULL;
};
node* newNode(int data){
    node *t=new node();
    t->data=data;
    return t;
}
node* preBst(int a[],int n){
      node *root = new node();
      root->data= a[0];
      stack<node*> st;
    node* p=root;
    int i=1;
      while(i<n){
           if(a[i]<p->data){
               st.push(p);
               p->left=newNode(a[i]);
               p=p->left;
               i++;
           }
           else{
               if(a[i]<st.empty()?INT32_MAX:st.top()->data){
                   p->right=newNode(a[i]);
                   p=p->right;
                   i++;
               }
               else{
                   p=st.top();
                   st.pop();
                  
               }
           }
      }
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
    freopen("D:/vscode/io/input.txt", "r", stdin);
    freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
    //    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
   node* x=preBst(a,n);
    inorder(x);
    // cout<<x->data;
    return 0;
}
