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
#define eb emplace_back
#define gcd(x,y) __gcd(x,y)
#define endl "\n"
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;
typedef vector<pii> vpii;
typedef vector<pli> vpli;
int const mod = 1e9 + 7;
template <typename T>
void debug(T v[],int m){ fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
template <typename T>
void debug(vector<T> v){ T m=v.size(); fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
ll power(ll x, ll n){ ll result = 1; while (n > 0){if (n % 2 == 1) result = (result * x)%mod; x = (x * x)%mod; n = n / 2;}return result;}

int const mxn=2*(1e5+2);
int colors[mxn],ans[2]={0,0},vis[mxn]={};
vi adj[mxn];
int n;
void dfs(int root,int parcol)
{
   // deb(root);
   if(colors[root]!=parcol)
   ans[colors[root]]++;
   vis[root]=1;

   for(auto &x:adj[root])
   {
      if(!vis[x])
      dfs(x,colors[root]);
   }

}

void solve()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   cin>>colors[i];
   // vi par(n,0);
   // fo(i,1,n+1)
   // cout<<i<<" "<<colors[i]<<endl;
   for(int i=0;i<n-1;i++)
   {
      int u,v;
      cin>>u>>v;
      // par[v-1]=1;
      adj[u].eb(v);
      adj[v].eb(u);
   }
   // auto root= min_element(all(par))-par.begin();
   // deb(root);
   dfs(1,-1);
   cout<<min(ans[0],ans[1]);

}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t=1;
   //  cin>>t;
    while(t--){
      solve();

    }

return 0;
}
