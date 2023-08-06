#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
ll mod = 1e9 + 7;
void solve()
{
    int n;
    cin>>n;
    map<ll, ll> m;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    ll temp = 1;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
     //   cout<<i<<" "<<m[i]<<nl;
        if (m[i] == 0)
        {
            break;
        }
        temp = temp * m[i];
        temp = temp % mod;
        ans += temp;
        ans %= mod;
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