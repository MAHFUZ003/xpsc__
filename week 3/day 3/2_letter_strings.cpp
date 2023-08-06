#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    map<string, ll> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        m[s]++;
    }
    ll ans = 0;
    for (auto x : m)
    {
        for (auto y : m)
        {
            if (x.first[0] == y.first[0] && x.first[1] != y.first[1])
            {
                ans += (x.second * y.second);
            }
            if (x.first[0] != y.first[0] && x.first[1] == y.first[1])
            {
                ans += (x.second * y.second);
            }
        }
    }
    cout << ans / 2 << nL;
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