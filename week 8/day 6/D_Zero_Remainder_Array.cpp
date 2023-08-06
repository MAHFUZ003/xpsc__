#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    ll k;
    cin >> k;
    ll x;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x % k]++;
    }
    ll ans = 0;
    for (auto z : m)
    {
        if(z.first==0)
        {
            continue;
        }
        if (((z.second - 1) * k + (k - z.first)) >= ans)
        {
            ans = (z.second - 1) * k + (k - z.first);
        }
        // ans = min( );
    }
    if(ans==0)
    {
        cout<<ans<<nl;
        return;
    }
    cout << ans+1 << nl;
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