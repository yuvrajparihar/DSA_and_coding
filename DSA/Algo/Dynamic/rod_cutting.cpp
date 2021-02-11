#include <bits/stdc++.h>
using namespace std;

#define fo(i, z, n) for (int i = z; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
typedef vector<int> vi;
typedef vector<ll> vl;
int dp[4][51];

//unbounded knapsack problem

int memoization(int wt[], int w, int n)
{
    if (n == 0 && w != 0)
		return INT32_MIN;
	if (n == 0 || w == 0)
		return 0;
	
	if (dp[n][w] != -1)
		return dp[n][w];

	else if (wt[n - 1] <= w)
	{
		return dp[n][w] = max(1 + memoization(wt, w - wt[n - 1], n), memoization(wt, w, n - 1));
	}

	else
	{
		return dp[n][w] = memoization(wt, w, n - 1);
	}
}

int tabulation(int wt[], int w, int n)
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= w; j++)
		{
			if (wt[i - 1] <= j)
				dp[i][j] = max(1 + dp[i][j - wt[i - 1]], dp[i - 1][j]);
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	return dp[n][w];
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("D:/vscode/io/input.txt", "r", stdin);
	freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	int wt[] = {2,1,1};
	int W = 4;
	int n = 3;
	for (int i = 1; i <= W; i++)
		dp[0][i] = INT32_MIN;
	for (int i = 0; i <= n; i++)
		dp[i][0] = 0;
	// cout << knapSack(wt, val,W, n);
	// cout << memoization(wt,W, n)<<endl;
	cout << tabulation(wt, W, n);
	// for (int i = 0; i <= n; i++)
	// 	{
	// 		for (int j = 0; j <= W; j++){
    //        		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// 	}

	return 0;
}
