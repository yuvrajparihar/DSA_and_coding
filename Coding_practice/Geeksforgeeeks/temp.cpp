// freopen("D:/OneDrive/vscode/io/input.txt", "r", stdin);
// freopen("D:/OneDrive/vscode/io/output.txt", "w", stdout);

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
        int n, m;
        cin >> n >> m;
        int a[n + m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = n; i < n + m; i++)
        {
            cin >> a[i];
        }
        int temp = n + m;
        set<int> s1(a, a + temp);
        cout << s1.size();
        //     for (int x : s1) {
        //     cout << x << " ";
        // }
    }
    return 0;
}