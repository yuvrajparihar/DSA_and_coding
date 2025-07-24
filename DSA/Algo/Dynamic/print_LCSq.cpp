#include <bits/stdc++.h>
using namespace std;

#define fo(i, z, n) for (int i = z; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;
string dp[100][100];

//print longest common subseq

//recursive
string LCS(string x, string y, int n, int m)
{
    if (n == 0 || m == 0)
        return "";
    if (x[n - 1] == y[m - 1])
        return x[n - 1] + LCS(x, y, n - 1, m - 1);
    else
    {
        string a = LCS(x, y, n, m - 1);
        string b = LCS(x, y, n - 1, m);
        if (a.length() < b.length())
            return b;
        else
            return a;
    }
}

//memoization space(O(n*n*m))  my way
string memoLCS(string x, string y, int n, int m)
{

    if (n == 0 || m == 0)
        return "";
    if (dp[n][m] != "*")
        return dp[n][m];
    if (x[n - 1] == y[m - 1])
        return dp[n][m] = x[n - 1] + LCS(x, y, n - 1, m - 1);
    else
    {
        string a = LCS(x, y, n, m - 1);
        string b = LCS(x, y, n - 1, m);
        if (a.length() < b.length())
            return dp[n][m] = b;
        else
            return dp[n][m] = a;
    }
}

//tabulation space(O(n*n*m))  my way
string tabLCS1(string x, string y, int n, int m)
{

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = x[i - 1] + dp[i - 1][j - 1];
            else
            {
                if (dp[i - 1][j].length() > dp[i][j - 1].length())
                    dp[i][j] = dp[i - 1][j];
                else
                {
                    dp[i][j] = dp[i][j - 1];
                }
            }
        }
    return dp[n][m];
}
//tabulation space(O(n*m))
//  best way
int t[100][100];
string tabLCS2(string x, string y, int n, int m)
{

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (x[i - 1] == y[j - 1])
                t[i][j] = 1 + t[i - 1][j - 1];
            else
            {
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    int i = n, j = m;
    string s = "";
    while (i > 0 && j > 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            s = x[i - 1]+s ;
            j--;
            i--;
        }
        else
        {
            if (t[i][j - 1] >= t[i - 1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    return s;
}

// string LCS(string x, string y, int n, int m, string ans)
// {

//     if (n == 0 || m == 0)
//         return ans;
//     if (x[n - 1] == y[m - 1])
//         return LCS(x, y, n - 1, m - 1, x[n - 1] + ans);
//     else
//     {
//         string a = LCS(x, y, n, m - 1, "");
//         string b = LCS(x, y, n - 1, m, "");
//         if (a.length() < b.length())
//             a = b;
//         if (ans.length() < a.length())
//             ans = a;
//         return ans;
//     }
// }

int main()
{
#ifndef ONLINE_JUDGE
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/input.txt", "r", stdin);
    freopen("/home/yuvraj/yuvi/DSA_and_coding/io/output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    string x = "abcdfh", y = "abedghr";
    // string x = "abcdfh", y = "xyzcdf";

    //    string x="a",y="a";

    int n = x.length();
    int m = y.length();

    // int **dp = new int *[n + 1];
    // for (int i = 0; i <= n; i++)
    //     dp[i] = new int[m + 1];
    cout << LCS(x, y, n, m) << endl;

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //     {
    //         dp[i][j] = "*";
    //     }
    // }

    // memset(dp, -1, sizeof(dp));
    // cout << memoLCS(x, y, n, m) << endl;

    // for (int i = 0; i <= m; i++)
    //     dp[0][i] = "";
    // for (int i = 0; i <= n; i++)
    //     dp[i][0] = "";
    // cout << tabLCS1(x, y, n, m) << endl;

    for (int i = 0; i <= m; i++)
        t[0][i] = 0;
    for (int i = 0; i <= n; i++)
        t[i][0] = 0;
    cout << tabLCS2(x, y, n, m) << endl;

    // for (int i = 0; i <= n; i++)
    // {
    // 	for (int j = 0; j <= m; j++){
    //     		cout<<dp[i][j]<<" ";
    // }
    // cout<<endl;
    // }

    return 0;
}
