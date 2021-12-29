#include <bits/stdc++.h>
using namespace std;

#define fo(i,z,n) for(int i=z;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define gcd(x,y) __gcd(x,y)
#define endl "\n"
typedef vector<int> vi;
typedef vector<ll> vl;
int const mod = 1e9 + 7;
template <typename T>
void debug(T v[],int m){ fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
template <typename T>
void debug(vector<T> v){ T m=v.size(); fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
ll power(ll x, ll n){ ll result = 1; while (n > 0){if (n % 2 == 1) result = (result * x)%mod; x = (x * x)%mod; n = n / 2;}return result;}


class Stack{
    
    public:
    int top=-1;
    int size=0;
    Stack(int cap){
        size=cap;
    }
    int *st= new int[size];
    

    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==size-1;
    }
    void push(int item){
        if(isFull())
        return;
        st[++top]=item;
    }
    bool pop(){
        if(isEmpty())
        return false;
        top--;
        return true;
    }
    int peek(){
        if(isEmpty())
        return -1;
        return st[top];
    }
    
};

int main(){
#ifndef ONLINE_JUDGE 
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t=1;
    // cin>>t;
    while(t--){
     
     Stack st(5);
     st.push(1);
     st.push(2);
     st.push(3);
     while(!st.isEmpty()){
         cout<<st.peek()<<" ";
         st.pop();
     }

    }

return 0;
}
