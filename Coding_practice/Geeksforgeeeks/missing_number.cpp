#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("D:/OneDrive/vscode/io/input.txt", "r", stdin);
	freopen("D:/OneDrive/vscode/io/output.txt", "w", stdout);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int i, a[n - 1];
		for (i = 1; i < n; i++)
		{
			cin >> a[i];
		}
		int j, k = 0;
		for (j = 1; j < n; j++)
		{   
			if (j != a[j])
			{   
				cout << j << endl;
				break;
			}
		}
		j--;
		if (j==n-1 && a[j]==n-1)
		{
			cout << n;
		}
	}

	return 0;
}