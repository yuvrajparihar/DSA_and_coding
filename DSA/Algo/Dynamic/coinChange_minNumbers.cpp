#include <bits/stdc++.h>
using namespace std;

#define fo(i, z, n) for (int i = z; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;
ll dp[5][31];

ll memoization(int s[], int n, int m)
{

    if (n == 0)
    {

        return 0;
    }
    if (m == 0 && n != 0)
        return INT32_MAX - 1;

    if (dp[m][n] != -1)
        return dp[m][n];

    else if (s[m - 1] <= n)
    {
        return dp[m][n] = min((memoization(s, n - s[m - 1], m) + 1), memoization(s, n, m - 1));
    }

    else
    {
        return dp[m][n] = memoization(s, n, m - 1);
    }
}

int tabulation(int s[], int n, int m)
{
    for (int i = 1; i <= n; i++)
        dp[0][i] = INT32_MAX - 1;
    for (int i = 0; i <= m; i++)
        dp[i][0] = 0;

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            if (s[i - 1] <= j)
            {
                dp[i][j] = min(dp[i][j - s[i - 1]] + 1, dp[i - 1][j]);
            }

            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    // 		for (int i = 0; i <= m; i++)
    // 		{
    // 			for (int j = 0; j <= n; j++){
    // 	        		cout<<dp[i][j]<<" ";
    // 		}
    // 		cout<<endl;
    // 		}
    return dp[m][n];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int s[] = {25, 5, 4};
    int n = 27;
    int m = 3;
    memset(dp, -1, sizeof(dp));
    // for (int i = 1; i <= W; i++)
    // 	dp[0][i] = INT32_MIN;
    // for (int i = 0; i <= n; i++)
    // 	dp[i][0] = 0;
    // cout << knapSack(wt, val,W, n);
    cout << memoization(s, n, m) << endl;
    cout << tabulation(s, n, m);
    // for (int i = 0; i <= m; i++)
    // 	{
    // 		for (int j = 0; j <= n; j++){
    //        		cout<<dp[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // 	}

    return 0;
}
