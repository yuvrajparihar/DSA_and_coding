#include <bits/stdc++.h>
using namespace std;

#define fo(i, z, n) for (int i = z; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("D:/vscode/io/input.txt", "r", stdin);
	freopen("D:/vscode/io/output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n, ans = 0;
		cin >> n;
		vector<string> v(n);
		fo(i, 0, n)
				cin >>v[i];
    	vector<pair<string,string>> vec;
		unordered_set<string> s(all(v));
		string x = "*", a, b;
		fo(i, 0, n - 1)
			fo(j, i + 1, n)
		{
              a = v[i], b = v[j];
			if (a[0] != b[0])
			{		
						
				swap(a[0], b[0]);
				vec.pb({a,b});
				
			}
		}
		fo(i,0,vec.size()){
			if(s.find(vec[i].first)==s.end()&&s.find(vec[i].second)==s.end()){
				ans+=2;
			}
		}

		cout << ans << endl;
	}
	return 0;
}
