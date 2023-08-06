#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
void dfs(int i, vector<int> &b, vector<pair<int, int>> v[], int d[], int x)
{
    b[i] = 1;
    d[i] = x;
    for (auto u : v[i])
    {
        if (!b[u.first])
        {
            dfs(u.first, b, v, x ^ (u.second));
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int c, d, w;
        cin >> c >> d >> w;
        v[c].push_back({d, w});
        v[d].push_back({c, w});
    }
    vector<int> b(n + 1);
    int d[n + 1];
    dfs(1, b, v, d, 0);
    int a = 0, e, c, f;
    map<int, pair<int, int>> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (m.count(d[i] ^ d[j]))
            {
                a = m[d[i] ^ d[j]].first;
                e = m[d[i] ^ d[j]].second;
                c = i;
                f = j;
            }
            else
            {
                m[d[i] ^ d[j]] = {i, j};
            }
            if (a)
            {
                break;
            }
        }
    }
    if (a)
    {
        cout << a << " " << e << " " << c << " " << f << nl;
    }
    else
    {
        cout << -1 << nl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}
// check constraints
// at first try a brute force way to solve
// then optimization

//  if its array:
//  1. try greedy
//  2. if it is a result of subproblems try dp
//  3. if it is showing for  a range minimum or maximum
//    3.1 tttttffffff
//    else
//    3.2 ffffftttttt
//    try binary search