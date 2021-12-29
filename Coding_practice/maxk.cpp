#include <bits/stdc++.h>
using namespace std;

#define ll long long

int const mxn=100001;
ll arr[mxn];

ll dp[mxn];
int num[mxn];
//fun to find max of every subarray of size k
void maxk(ll k,ll n)
{

   int i=0;
   multiset<pair<int,int>> st;
   for(int j=1;j<min(n,k+1);j++)
   {
       st.insert({arr[j],j});
   }
   num[0]= (*st.rbegin()).second;
   i++;
   for(;i<n-k;i++) 
   {
       st.erase(st.find({arr[i],i}));
       st.insert({arr[i+k],i+k});
       num[i]= (*st.rbegin()).second;
   }
   for(;i<n-1;i++)
   {
       st.erase(st.find({arr[i],i}));
       num[i]= (*st.rbegin()).second;
   }
}

ll fun(ll n,ll k,ll i,ll taste[])
{    
    if(i==n-1)
    return taste[i];
    if(dp[i]!=-1)
    return dp[i];
    int x=num[i];
    
    return dp[i]=taste[i]+fun(n,k,x,taste);
}


int main(){

   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t=1;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
    
     for(int i=0;i<n;i++)
     cin>>arr[i];
     
     ll taste[n];
     
     for(int i=0;i<n;i++)
     cin>>taste[i];
    
    maxk(k,n);

    //  build(0,0,n-1);

     ll ans=0,temp;
     memset(dp,-1,sizeof(dp));
    
     for(int i=0;i<n;i++)
    {
       temp=fun(n,k,i,taste);
       ans=max(ans,temp);
    }
     
     cout<<ans<<endl;         

    }

return 0;
}
