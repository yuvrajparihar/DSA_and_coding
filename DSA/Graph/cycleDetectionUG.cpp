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

bool bfsIsCycle(int n,vector<int> adj[]){
    //we traverse through graph and check if a node is already visited and 
    //it is not the parent node of current node than there is cycle in graph
    vi vis(n+1,0);
    for(int i=1;i<=n;i++){   //for disconnected componenets otherwise not required
        if(!vis[i])
       {
           queue<pair<int,int>> q;
           q.push({i,0});
           vis[i]=1;
           while(!q.empty()){
               pair<int,int> node = q.front();
               q.pop();
               
               
               for(auto x:adj[node.first])
                {
                    if(!vis[x])
                    {
                        q.push({x,node.first});
                        vis[x]=1;
                    }
                    else{
                        if(x!=node.second)
                        return true;
                    }
                }

           }
       }
    }
   return false;
}
bool dfs(vector<int> adj[],vector<int> &vis,int node,int par)
{
    vis[node]=1;
    for(auto x:adj[node])
    {
        if(!vis[x])
        {
            if(dfs(adj,vis,x,node))
            {
                return true;
            }
        }
        else
        {
            if(par!=x)
            {
                return true;
            }
        }
        
    }
    return false;
}

bool isCycleDfs(int n,vector<int> adj[])
{
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            if(dfs(adj,vis,i,-1))
            return true;
        }
    }
    return false;
}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t=1;
    cin>>t;
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
      cout<<"result\n";
      cout<<bfsIsCycle(n,adj)<<endl;
      cout<<isCycle(n, adj)<<endl;
      cout<<isCycleDfs(n,adj);
    }

return 0;
}
