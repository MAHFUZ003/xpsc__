#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x % 2 == 0)
    {
        cout << (y + 1 - x) / 2 << nl;
    }
    else
    {
        for (ll i = 3; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                cout << ((y + 1 - (x+i)) / 2) + 1 << nl;
                return;
            }
        }
        cout << ((y + 1 - 2 * x) / 2) + 1 << nl;
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