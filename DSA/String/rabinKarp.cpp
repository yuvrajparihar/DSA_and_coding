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
ll const mod = 1e9 + 7;
template <typename T>
void debug(T v[],int m){ fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
template <typename T>
void debug(vector<T> v){ T m=v.size(); fo(i,0,m) cout<<v[i]<<" "; cout<<endl;}
ll power(ll x, ll n){ ll result = 1; while (n > 0){if (n % 2 == 1) result = (result * x)%mod; x = (x * x)%mod; n = n / 2;}return result;}

//In rolling hashing we were using nlogn time for finding a pattern
//because we were calculating inverse of prime for every query
//But here in rabin karp we take prime to left side of equation
//that is, now we are multiplying needleHash with prime instead of dividing the haystackHash with prime


int fun(int n, string hay)
{
     int p=1;
    int hashVal=0;
    for(int i=0;i<n;i++)
    {
       hashVal=( hashVal+(p*1ll*(hay[i]-'a'+1))%mod)%mod;

        p= (p*1ll*31)%mod;
    }    
    return hashVal%mod;
}

void prefix(vector<ll> &hash,int n,string hay)
{
    int p=1;
    int hashVal=0;
    for(int i=0;i<n;i++)
    {
        hashVal=( hashVal+(p*1ll*(hay[i]-'a'+1))%mod)%mod;
        hash[i]= hashVal%mod;
        p= (p*1ll*31)%mod;
    }    
}

int main()
{
    #ifndef ONLINE_JUDGE 
       freopen("D:/vscode/io/input.txt", "r", stdin);
       freopen("D:/vscode/io/output.txt", "w", stdout);
    #endif
    int m;
    // cin>>t;

    while(cin>>m)
    {  
    	// int temp;
    	// cin>>temp;
        // deb(m);
        string needle,hay;
        cin>>needle>>hay;
        int n=hay.length();
        vector<ll> hash(n+1);
        prefix(hash,n,hay);
        int needleHash= fun(m,needle);
        // debug(inv);
        // debug(hash);
        
         // int flag=1;
         ll p=1;
        for(int i=0;i<n-m+1;i++)
        {   
            ll val;
            if(i==0)
            {
               val= (hash[i]*1ll) %mod;
            }
            else
            {     
                 val= ((mod+hash[i+m-1]-hash[i-1])%mod);                            
               
            }
          
            // deb(needleHash);
            if(val==((needleHash*p)%mod))
               {
               	 cout<<i<<endl;
               	 // flag=0;
               }
               p= (p*1ll*31)%mod;
        }
        
        cout<<endl;
        
    }
    
    
    return 0;
    
}