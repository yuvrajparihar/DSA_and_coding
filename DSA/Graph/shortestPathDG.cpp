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

//Shortest distance of all nodes from a given source node
//this is weighted graph

void topoSort(vector<pair<int,int>> adj[],vector<int> &vis,stack<int> &st,int node)
{
    vis[node]=1;
    
    for(auto x: adj[node])
    {
        if(!vis[x.first])
        {
            topoSort(adj,vis,st,x.first);
        }
    }
    st.push(node);
}

stack<int> dfs(vector<pair<int,int>> adj[], int n)
{
    vector<int> vis(n+1,0);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        if(!vis[i])
        {
            topoSort(adj,vis,st,i);
        }
    }

    // while (!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    
    return st;
}

void shortestPathBfs(vector<pair<int,int>> adj[],int n,int src)
{
    stack<int> st=dfs(adj,n);
    // deb(n);
    vector<int> dist(n,INT32_MAX);
    dist[src]=0;

    while(!st.empty())
    {
        int node=st.top();
        st.pop();
        //if the node is already visited
        if(dist[node]!=INT32_MAX)
        {   for(auto x: adj[node])
            {
                if(dist[node]+x.second<dist[x.first])
                {
                    dist[x.first]=dist[node]+x.second;
                }
            }
        }
    }
    debug(dist);
}


int main(){
#ifndef ONLINE_JUDGE 
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t=1;
    // cin>>t;
    while(t--){
    int n; //no. of nodes
    int m; // no. of edges
    cin>>n>>m;
    //unweighted
    vector<pair<int,int>> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].pb({v,w});
    }
    
       shortestPathBfs(adj,n,0);
    }

return 0;
}
// 6 7
// 0 1 2
// 0 4 1
// 1 2 3
// 2 3 6
// 4 2 2
// 4 5 4
// 5 3 1
//ans: 0 2 3 6 1 5 