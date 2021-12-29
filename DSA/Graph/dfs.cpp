#include <bits/stdc++.h>
using namespace std;

#define fo(i,z,n) for(int i=z;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define gcd(x,y) __gcd(x,y)
typedef vector<int> vi;
typedef vector<ll> vl;
int const mod = 1e9 + 7;
template <typename T>
void debug(T v[],int m){ fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
template <typename T>
void debug(vector<T> v){ T m=v.size(); fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
ll power(ll x, ll n){ ll result = 1; while (n > 0){if (n % 2 == 1) result = (result * x)%mod; x = (x * x)%mod; n = n / 2;}return result;}

void dfs(int node,vi &vis,vi adj[],vi &v){
    v.pb(node);
    vis[node]=1;

    for(auto x:adj[node]){
        if(!vis[x])
        {
            dfs(x,vis,adj,v);
        }
    }
}

vector<int> dfsGraph(int n,vector<int> adj[]){
    vi v;
    vi vis(n+1,0);
    for(int i=0;i<n;i++){ //for disconnected components, otherwise not required
        if(!vis[i])
       {
          dfs(i,vis,adj,v);
       }
    }
    return v;
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
    int n; //no. of nodes
    int m; // no. of edges
    cin>>n>>m;
    //unweighted
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);//for undirected
    }
       debug(dfsGraph(n,adj));
    }

return 0;
}
