#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    map<ll, ll> m;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }

    vector<ll> values;
    for (auto z : m)
    {
        values.push_back(z.second);
    }
    sort(values.begin(), values.end());
    ll current = 1e7, ans = 0;
    for (int i = values.size() - 1; i >= 0; i--)
    {
        ans += min(current, values[i]);
        current = min(current, values[i]);
        current--;
        if (current == 0)
        {
            break;
        }
    }
    cout << ans << nl;
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