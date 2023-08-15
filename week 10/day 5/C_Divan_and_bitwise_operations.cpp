#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

 
const int MOD = 1e9 + 7;
 
ll modpow(ll a, ll b)
{
    ll res = 1LL;
    while (b)
    {
        if (b % 2)
        {
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> arr(m);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y >> arr[i];
    }
    ll ans = 0;
    for (int i = 0; i < m; i++)
        ans |= arr[i];
    cout << (modpow(2LL, (ll)(n - 1)) * ans) % MOD << '\n';
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