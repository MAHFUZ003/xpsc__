#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<ll, pair<ll, int>>> v;
    ll w, x;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> w;
        v.push_back({w, {x, i + 1}});
    }
    sort(v.begin(), v.end());
    vector<pair<ll, ll>> final;
    ll sum = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        sum += v[i].first;
        final.push_back({v[i].second.first, v[i].second.second});
    }
    cout << sum << nL;
    sort(final.begin(), final.end());
    int i = 0, j = 2 * n - 1;
    for (i = 0, j = 2 * n - 1; i < n; i++, j--)
    {
        cout << final[i].second << " " << final[j].second << nL;
    }
    cout << nL;
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