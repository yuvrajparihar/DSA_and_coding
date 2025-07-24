#include <bits/stdc++.h>
using namespace std;

#define fo(i,z,n) for(int i=z;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
// #define mp make_pair
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
  ll n;
  cin>>n;
  string s;
  cin>>s;
  
  int flag=1;
  while(flag)
  {
     flag=0;
     fo(j,0,9)
     {  
        char a= j+48,b=j+1+48;
        fo(i,0,s.size()-1)
        {
            if(s[i]==a&&s[i+1]==b)
            {
               s.replace(i,2,to_string(((s[i]-'0')+2)%10));
               flag=1;
               
            }
        }
     }
        char a= 57,b=48;
        fo(i,0,s.size()-1)
        {
            if(s[i]==a&&s[i+1]==b)
            {
               s.replace(i,2,to_string(((s[i]-'0')+2)%10));
               flag=1;
               
            }
        }
  }
  cout<<s<<endl;
}
int main(){
#ifndef ONLINE_JUDGE 
  freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
  freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t;
   cin >> t;

   for(int line=1;line<=t;line++)
   { 

    cout<<"Case #"<<line<<": ";
    solve();

   } 
return 0;
}

