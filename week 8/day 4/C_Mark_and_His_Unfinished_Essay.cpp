#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    vector<pair<ll, ll>> len(c), query(c);
    ll curr = n;
    for (int i = 0; i < c; i++)
    {
        // every l,and r are stored
        cin >> query[i].first >> query[i].second;
        ll qlen = query[i].second - query[i].first + 1;
        // lenth range for current query;
        len[i].first = curr + 1, len[i].second = curr + qlen;
        curr = len[i].second;
    }
    while (q--)
    {
        /* code */
        ll idx;
        cin >> idx;
        for (ll i = c - 1; i >= 0; i--)
        {
            if (idx >= len[i].first && idx <= len[i].second)
            {
                ll gap = idx - len[i].first;
                idx = query[i].first + gap;
            }
        }
        cout << s[idx - 1] << nl;
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