#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    map<ll, ll> m;
    ll x;
    ll ans = 0;
    ll current = 0;
    m[0]++;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        current += x;
       // cout<<current<<" "<<current-k<<nl;
        ans += m[current - k];
        m[current]++;
    }
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

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