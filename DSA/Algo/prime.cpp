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

void primes(bool prime[]){
    int n=1000001;
    prime[0]=prime[1]=prime[4]=false;
    for(int i=3;i*i<n;i+=2){
        for(int j=i*i;j<n;j+=i){
            prime[j]=false;
        }
    }
}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);
   bool prime[1000001];
   memset(prime,true,sizeof(prime));
   ll ans=1;
    primes(prime);
    for(int i=3;i<26;i+=2){
        if(prime[i])
        cout<<i<<" ";
    }
    // cout<<ans;

}
