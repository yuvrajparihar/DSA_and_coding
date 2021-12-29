#include <bits/stdc++.h>
using namespace std;
vector<int> V[100006];
int n, d, h[100006], x, y, vis[100006], s, t, i, j;
int f(int x, int s)
{
    if (h[x])
        s += 1;
    else
        s = 0;
    if (s > d or vis[x])
        return 0;
    vis[x] = 1;
    int i, u = V[x].size(), t = 0;
    if (u == 1 and x > 1)
        return 1;
    for (i = 0; i < u; i++)
    {
        t += f(V[x][i], s);
    }
    return t;
}
int main()
{
    cin >> n >> d;
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        V[x].push_back(y);
        V[y].push_back(x);
    }
    cout << f(1, 0) << endl;
}

// Middleware, emitter, and dispatcher in node js
/*
0. multiply with 1ll on intializing in a function (accumulate)
1. Check borderline constraints. Can a variable you are dividing by be 0?
2. Use ll while using bitshifts
3. Do not erase from set while iterating it
4. Initialise everything
5. Read the task carefully, is something unique, sorted, adjacent, guaranteed??
6. DO NOT use if(!mp[x]) if you want to iterate the map later
7. Are you using i in all loops? Are the i's conflicting?
*/

// sorting, gcd, odd-even
// binary search
// dp
// observe from tcs
// map, set, heap

// WA after 5 tcs
// 1. overflow
// 2. out of bound/ rte
// 3. check out the corner cases (n==1)
// 4. negative values

// RTE - out of bound (intialize a array with wrong variable)

// trick - when you take a priority queue of pair and u want the second of pair in
//  reverse order, then push -ve of second