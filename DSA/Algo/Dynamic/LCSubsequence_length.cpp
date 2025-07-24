#include <bits/stdc++.h>
using namespace std;

#define fo(i, z, n) for (int i = z; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;
int dp[100][100];
int LCS(string x, string y, int n, int m)
{

    if (n == 0 || m == 0)
        return 0;
    if (x[n - 1] == y[m - 1])
        return 1 + LCS(x, y, n - 1, m - 1);
    else
    {
        return max(LCS(x, y, n - 1, m), LCS(x, y, n, m - 1));
    }
}

int memoLCS(string x, string y, int n, int m)
{

    if (n == 0 || m == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (x[n - 1] == y[m - 1])
        return dp[n][m] = 1 + memoLCS(x, y, n - 1, m - 1);
    else
    {
        return dp[n][m] = max(memoLCS(x, y, n - 1, m), memoLCS(x, y, n, m - 1));
    }
}
int tabLCS(string x, string y, int n, int m)
{

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    return dp[n][m];
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    string x = "abcdfh", y = "abedghr";
    // string x = "abcdfh", y = "adr";

    //    string x="a",y="a";

    int n = x.length();
    int m = y.length();

    // int **dp = new int *[n + 1];
    // for (int i = 0; i <= n; i++)
    //     dp[i] = new int[m + 1];
    cout << LCS(x, y, n, m) << endl;

    // memset(dp, -1, sizeof(dp));
    // cout << memoLCS(x, y, n, m) << endl;

    for (int i = 0; i <= m; i++)
        dp[0][i] = 0;
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    cout << tabLCS(x, y, n, m) << endl;
    
    for (int i = 0; i <= n; i++)
    {
    	for (int j = 0; j <= m; j++){
        		cout<<dp[i][j]<<" ";
    }
    cout<<endl;
    }

    return 0;
}
