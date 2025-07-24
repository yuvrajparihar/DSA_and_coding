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


void adjacencyMatrix(){
    //TC - O(n^2)
    //sC - O(n^2)

    int n; //no. of nodes
    int m; // no. of edges
    cin>>n>>m;
    int adj[n+1][n+1]={0};
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;// for undirected
    }
}

void adjacencyList(){
    //TC - O(N+2E)
    //sC - O(N+2E)

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
    //weighted
    // vector<pair<int,int>> adj[n+1];
    // for(int i=0;i<m;i++){
    //     int u,v,wt;
    //     cin>>u>>v>>wt;
    //     adj[u].pb({v,wt});
    //     adj[v].pb({u,wt});
    // }
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
     

    }

return 0;
}
