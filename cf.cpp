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

bool fun(vl arr,vl &v,int val,int n)
{
   for(int i=n-1;i>1;i--)
   {
      if(arr[i]<val)
      return false;
      ll temp=(min(arr[i]-val,v[i]))/3;
      arr[i-2]+=2*temp;
      arr[i-1]+=temp;
   }
   if(min(arr[0],arr[1])<val)
   return false;
   return true;
}

void solve()
{
   int n;
   cin>>n;
   vl v(n);
   fo(i,0,n)cin>>v[i];

   int l=1,h=1e9+2,mid;
   ll ans=0;
   while(l<h)
   {
      mid=(l+h)/2;
      if(fun(v,v,mid,n))
      {
         ans=mid;
         l=mid+1;
      }
      else
      h=mid;
   }
   println(ans);

}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t=1;
    cin>>t;
    while(t--){
      solve();

    }

return 0;
}
