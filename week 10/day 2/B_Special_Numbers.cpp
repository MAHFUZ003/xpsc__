#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
ll mod = (1e9) +7;
ll p(ll n, ll cnt)
{
    ll c = 1;
    while (cnt)
    {
        c *= n;
        c= c%mod;
        cnt--;
    }
    return c;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    ll sum = 0;
    while (k)
    {
        if (k % 2 == 1)
        {
            sum += p(n, cnt);
            sum %=mod;
        }
        k /= 2;
        cnt++;
    }
    cout << sum << nl;
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