#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
ll printNcR(ll n, ll r)
{

    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;

            // gcd of p, k
            long long z = __gcd(p, k);

            p /= z;
            k /= z;

            n--;
            r--;
        }
    }

    else
        p = 1;

    return p;
}

void solve()
{
    ll x;
    cin >> x;
    ll low = 2, high = 1e10;
    ll final;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (x >= printNcR(mid, 2))
        {
            low = mid + 1;
            final =mid;
        }
        else
        {
            high = mid - 1;
        }
    }
   // cout<<final<<nl;
    cout << final + (x - printNcR(final, 2)) << nl;
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