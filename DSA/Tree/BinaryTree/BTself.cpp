#include <bits/stdc++.h>
using namespace std;

#define fo(i, z, n) for (int i = z; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;

struct Node
{
    int data;
    Node *left = NULL;
    Node *right = NULL;
    Node(int data)
    {
        this->data = data;
    }
};
bool paths(vector<Node*> &v,Node* root,Node *key){
        if(root==NULL)
            return 0;
        v.push_back(root);
        
        if(key==root)
            return 1;
        
        if(paths(v,root->left,key)||paths(v,root->right,key))
            return 1;
        
        v.pop_back();
        return 0;
    }

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *t = q.front();
        q.pop();
        cout << t->data << " ";
        if (t->left)
        {
            q.push(t->left);
        }
        if (t->right)
        {
            q.push(t->right);
        }
    }
}

void iterativePre(Node *t){
    stack<Node*> st;
   
    while(!st.empty()||t){
        if(t){
            cout<<t->data<<" ";
            st.push(t);
            t=t->left;

        }
        
        else{
           t=st.top();
           t=t->right;
           st.pop();
        }
    }
}
void iterativeInorder(Node *t){
    stack<Node*> st;
   
    while(!st.empty()||t){
        if(t){
            // cout<<t->data<<" ";
            st.push(t);
            t=t->left;

        }
        
        else{
           t=st.top();
           cout<<t->data<<" ";
           t=t->right;
           st.pop();
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/vscode/io/input.txt", "r", stdin);
    freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    Node *root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(4);
    root->right->left = new Node(7);

    // levelOrder(root);
    // iterativePre(root);
    iterativeInorder(root);

    
    return 0;
}
