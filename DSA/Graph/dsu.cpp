#include <bits/stdc++.h>
using namespace std;

#define fo(i,z,n) for(int i=z;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << "\n"
#define print(x) cout<<x<<" "
#define println(x) cout<<x<<"\n"
#define nline cout<<"\n"
#define all(x) x.begin(), x.end()
#define pb push_back
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

int const mxn=1e5;
int parent[mxn],ranks[mxn];

void makeSet()
{
    for(int i=1;i<mxn;i++)
    {
        parent[i]=i;
        ranks[i]=0;
    }
}

int find(int node)
{
    if(node==parent[node])
    return node;

    return parent[node]=find(parent[node]);
}

void Union(int u,int v)
{
    u=find(u);
    v=find(v);
    if(ranks[u]<ranks[v])
    {
        parent[u]=v;
    }
    else if(ranks[v]>ranks[u])
    {
        parent[v]=u;
    }
    else
    {
        parent[v]=u;
        ranks[u]++;
    }
}


void solve()
{
   

}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t=1;
    // cin>>t;
    while(t--){
      solve();

    }

return 0;
}
