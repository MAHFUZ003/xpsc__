#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll l, r;
    cin >> l >> r;
    if ((r / 2) + (r / 2) >= l && (r / 2) + (r / 2) != 2)
    {
        cout << r / 2 << " " << r / 2 << nl;
    }
    else
    {
        int flag = 0;
        for (ll i = 2; i * i <= r; i++)
        {
            if ((__gcd(r - i, i) >= 2))
            {
                cout << r - i << " " << i << nl;
                return;
            }
        }
        cout << -1 << nl;
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