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


// O(n^2)
int longestSubsequence(int n, int a[])
{

    long long ans=0;
    vector<long long> v(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]&&v[i]<=v[j])
            v[i]++;
        }
    }
    ans= *max_element(v.begin(),v.end());
  return ans;
}


int main(){
#ifndef ONLINE_JUDGE 
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);
  
  int a[]={5,8,3,7,9,1};
  int n=6;
  cout<<longestSubsequence(n,a);
  return 0;
   

}
