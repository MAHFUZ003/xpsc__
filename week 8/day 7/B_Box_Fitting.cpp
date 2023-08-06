#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll n, w;
    cin >> n >> w;
    multiset<ll> ms;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ms.insert(x);
    }
    int h = 1, left = w;
    while (!ms.empty())
    {
        auto itr = ms.upper_bound(left);
        if (itr == ms.begin())
        {
            left = w;
            h++;
        }
        else
        {
            itr--;
            int val = *itr;
            left -= val;
            ms.erase(itr);
        }
    }
    cout << h << "\n";
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