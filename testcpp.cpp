#include <bits/stdc++.h>
#include <string>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

string decToBinary(int n)
{

    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    string t = "";
    for (int j = i - 1; j >= 0; j--)
    {
        t.append(to_string(binaryNum[j]));
    }
    return t;
}
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

#ifndef ONLINE_JUDGE
    freopen("D:/coding/vscode/io/input.txt", "r", stdin);
    freopen("D:/coding/vscode/io/output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;

    while (t--)
    {
        int i, n;
        cin >> n;
        i = pow(10, n - 1);
        int x = 0, temp = 0;
        fo(i, pow(10, n))
        {
            string str = "";
            string k = "";
            int p = i;
            while (p > 0)
            {
                int z = p % 10;
                k = decToBinary(z).append(k);

                p = p / 10;
            }
            str = k;
            if (str.size() > n)
            {
                str.resize(str.size() - n);
            }
            else
            {
                continue;
            }
            if (binaryToDecimal(str) > temp)
            {
                x = i;
                temp = binaryToDecimal(str);
            }
        }
        cout << x;
    }

    return 0;
}
