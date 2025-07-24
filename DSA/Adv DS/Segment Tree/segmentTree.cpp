#include <bits/stdc++.h>
using namespace std;

#define fo(i,z,n) for(int i=z;i<n;i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
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

int const mxn=100001;
int seg[4*mxn];
int arr[mxn];

//segment for finding max in range

void build(int ind,int low,int high)
{
    if(low==high)
    {
        seg[ind]=arr[low];
        return;
    }
   int mid= (low+high)/2; 
   build (2*ind+1,low,mid);
   build (2*ind+2,mid+1,high);
   seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}

int query(int ind,int low,int high,int l,int r)
{
    if(r<low||high<l)
    {
        return INT_MIN;
    }
    if(low>=l&&high<=r)
    {
        return seg[ind];
    }
    int mid=(low+high)/2;
    int left= query(2*ind+1,low,mid,l,r);
    int right= query(2*ind+2,mid+1,high,l,r);
    return max(left,right);
}

void update(int ind,int low,int high,int pos,int val)
{
    if(low==high)
    {
        seg[ind]=val;
    }
    else
    {
        int mid=(low+high)/2;
        if(pos<=mid)
        {
            update(2*ind+1,low,mid,pos,val);
        }
        else
        {
            update(2*ind+2,mid+1,high,pos,val);
        }   
        seg[ind]=max(seg[2*ind+1],seg[2*ind+2]); 
    }    
}

int main(){
#ifndef ONLINE_JUDGE 
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
   freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
   ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t=1;
    // cin>>t;
    while(t--){
     int n;
     cin>>n;
    
     fo(i,0,n)
     cin>>arr[i];
     
     build(0,0,n-1);
     update(0,0,n-1,1,9);
     int q;
     cin>>q;
     while (q--)
     {
         int l,r;
         cin>>l>>r;
         cout<<query(0,0,n-1,l,r)<<endl;
     }
     

    }

return 0;
}
