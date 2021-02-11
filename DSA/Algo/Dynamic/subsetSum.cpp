#include <bits/stdc++.h>
using namespace std;

#define fo(i,z,n) for(int i=z;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;
int dp[7][10];
int countt=0;
int subsetsum(int set[],int n,int sum){
    if(sum==0)
    return true;
    if(n==0){
        return false;
    }
    if(dp[n][sum]!=-1)
    return dp[n][sum];
    if(set[n-1]<=sum)
    return dp[n][sum]=subsetsum(set,n-1,sum)||subsetsum(set,n-1,sum-set[n-1]);
    else
    {
        return dp[n][sum]=subsetsum(set,n-1,sum);
    }
    
}

int subsetSumTab(int set[],int n,int sum){
     for(int i=0;i<=n;i++)
    for(int j=0;j<=sum;j++){
       if(i==0)
       dp[i][j]=false;
       if(j==0)
       dp[i][j]=true;
    }    
    
     for(int i=1;i<=n;i++)
    for(int j=1;j<=sum;j++){
        if(set[n-1]<=sum)
          dp[i][j]=dp[i-1][j-set[i-1]]||dp[i-1][j];
        else
        {
            dp[i][j]=dp[i-1][j];
        }
    }    
   return dp[n][sum];
}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("D:/vscode/io/input.txt", "r", stdin);
   freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);
//    memset(dp,-1,sizeof(dp));
    int set[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    cout << subsetSumTab(set,n,sum); 


    return 0; 
   

}

int ans=INT32_MAX;

void minSubsetSum(int a[],int n,int asum,int sum){
    if(n>0){
        if((sum-(2*(asum+a[n-1])))>=0){
             int temp=sum-(asum+a[n-1])-(asum+a[n-1]);
             ans= min(ans,temp);
             minSubsetSum(a,n-1,asum,sum);
             asum=asum+a[n-1];
              minSubsetSum(a,n-1,asum,sum);
        }
        else{
              minSubsetSum(a,n-1,asum,sum);
        }
    }
}