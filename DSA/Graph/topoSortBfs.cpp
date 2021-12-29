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

//Kahn's Algorithm
//indegree of a node->number for nodes pointing to it (or no. of edges coming inwards)
void topoSort(vector<int> adj[],int n)
{
    vector<int> vis(n+1,0),indegree(n+1,0);
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        for(auto x: adj[i])
        {
            indegree[x]++;
        }
    }

   for(int i=1;i<=n;i++)
   {
       if(indegree[i]==0)
       q.push(i);
   }
   vector<int> topo;
   while (!q.empty())
   {
       int node= q.front();
       q.pop();
       topo.push_back(node);
       for(auto x:adj[node])
       {
           indegree[x]--;
           if(!indegree[x])
           q.push(x);
       }
   }
   
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
    }
    
    //   dfs(adj,n);
    }

return 0;
}
