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

void solve()
{
   ll n,k,x;
   cin>>n>>k>>x;
   string s;
   cin>>s;
   int ast;
   string ans="";
   ast= count(all(s),'*');
   if(ast==n)
   {
      while(x--)
      {
         ans+='b';
      }
   }
   else
   {
      int val=(x-1)/k,rem=(x-1)%k;
      int remaining=ast-val;
      if(rem)
      ast--;
      deb(val);
      deb(rem);
      deb(ast);
      int i=0;
      while(remaining)
      {
         if(s[i]=='a')
         ans+=s[i];
         else
         remaining--;
         i++;
      }
      while(i<n&&s[i]=='a')
      ans+=s[i++];
      if(rem)
      {
         while(rem--)
         ans+='b';
         i++;
      }
      while(i<n)
      {
         if(s[i]=='a')
         ans+=s[i];
         else
         {
            fo(j,0,k)
            ans+='b';
         }
         i++;
      }
   }
   cout<<ans<<endl;

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
      solve();

    }

return 0;
}
