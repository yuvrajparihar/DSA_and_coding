#include <bits/stdc++.h>
using namespace std;

#define fo(i,z,n) for(int i=z;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;
int const mod = 1e9 + 7;
template <typename T>
void debug(T v[],int m){ fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
template <typename T>
void debug(vector<T> v,int m){ fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}

ll fact(ll n){
    ll ans=1;
    fo(i,1,n+1){
        ans= (ans*i)%mod;
    }
    return ans;
}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

   cout<<fact(4);

return 0;
}
