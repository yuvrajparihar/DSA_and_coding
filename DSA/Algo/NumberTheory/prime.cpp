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

bool isPrime(int n)
{

    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            return false;
        }
    }
    return true;
}

//sieve of eranthoses
void primes(bool prime[])
{
    int n = 1000001;
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
void playground(bool prime[])
{
    set<int> st;
    for (int i = 121; i < 200; i++)
    {
        if (prime[i])
        {
            st.insert(i%30);
        }   
           
    }
     deb(st.size());
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
    ll ans = 1;
    primes(prime);
    // for (int i = 1; i < 100000; i++)
    // {
    //     if (prime[i])
    //         cout << i << " ";
    // }
    // cout << endl;
    // for (int i = 1; i < 100000; i++)
    // {
    //     if (isPrime(i))
    //         cout << i << " ";
    // }
    // cout<<isPrime(121);


    playground(prime);
   

}
