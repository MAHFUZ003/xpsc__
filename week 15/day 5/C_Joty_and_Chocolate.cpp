#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll ans = (n / a) * p;
    ans += (n / b) * q;
    ll gc = a * b / __gcd(a, b);
   // cout<<gc<<nl;
    if (gc <= n)
    {gc = n/gc;
        if (p > q)
        {
            ans -= gc * q;
        }
        else
        {
            ans -= gc * p;
        }
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