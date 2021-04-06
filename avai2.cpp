#include <bits/stdc++.h>
using namespace std;

#define fo(i, z, n) for (int i = z; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;

int dp[1000001];
int M=1000000007;
ll fun(int sum){
   if(sum<0)
   return 0;
   if(sum==0)
   return 1;
   if(dp[sum]!=-1)
   return dp[sum];
   else
   return dp[sum]=(fun(sum-1)+fun(sum-2)+fun(sum-3)+fun(sum-4)+fun(sum-5)+fun(sum-6))%M;
   
}

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

   // int t;
   // cin >> t;
   // while (t--)
   // {
      ll n;
      cin >> n;
      memset(dp,-1,sizeof(dp));
      cout<<fun(n)<<endl;


      
      
   // }
}
