#include <bits/stdc++.h>
using namespace std;

#define fo(i,z,n) for(int i=z;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;
int dp[4][51];

int knapSack(int wt[],int val[],int w,int n){
   if(n==0||w==0)
   return 0;
   else if(wt[n-1]<=w){
       return max(val[n-1]+knapSack(wt,val,w-wt[n-1],n-1),knapSack(wt,val,w,n-1));
   }
   else
   {
       return knapSack(wt,val,w,n-1);
   }
   
}

int memoization(int wt[],int val[],int w,int n){
   if(n==0||w==0)
   return 0;
   if(dp[n][w]!=-1)
   return dp[n][w];

   else if(wt[n-1]<=w){
       return dp[n][w]=max(val[n-1]+memoization(wt,val,w-wt[n-1],n-1),memoization(wt,val,w,n-1));
   }
   else
   {
       return dp[n][w]=memoization(wt,val,w,n-1);
   }
   
}

int tabulation(int wt[],int val[],int w,int n)
{
    for(int i=1;i<=n;i++)
    for(int j=1;j<=w;j++){
        if(wt[n-1]<=w)
          dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
        else
        {
            dp[i][j]=dp[i-1][j];
        }
    }    
    return dp[n][w];
}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);
   memset(dp,0,sizeof(dp));
 int val[] = { 60, 100, 120 }; 
    int wt[] = { 10, 20, 30 }; 
    int W = 50; 
    int n = sizeof(val) / sizeof(val[0]); 
    // cout << knapSack(wt, val,W, n); 
    // cout << memoization(wt, val,W, n); 
    cout << tabulation(wt, val,W, n); 


    return 0; 
   

}
