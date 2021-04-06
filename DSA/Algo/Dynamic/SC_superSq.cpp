#include <bits/stdc++.h>
using namespace std;

#define fo(i, z, n) for (int i = z; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;

//shortest common supersequence

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
            s = x[i - 1] + s;
            j--;
            i--;
        }
        else
        {
            if (t[i][j - 1] >= t[i - 1][j])
            {
                s = y[j - 1] + s;
                j--;
            }
            else
            {
                s = x[i - 1] + s;
                i--;
            }
        }
    }
    while (i > 0)
    {

        s = x[i - 1] + s;
        i--;
    }
    while (j> 0)
    {

        s = y[j - 1] + s;
        i--;
    }
    return s;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/vscode/io/input.txt", "r", stdin);
    freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    string x = "aggtab", y = "gxtxayb";
    // string x = "acbcf", y = "abcdaf";

    //    string x="a",y="a";

    int n = x.length();
    int m = y.length();

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

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
