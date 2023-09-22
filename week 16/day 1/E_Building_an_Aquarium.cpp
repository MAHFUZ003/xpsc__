#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    ll x;
    cin >> x;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll low = 1, high = 1e16;
    ll mid;
    ll ans = 0;
    while (low <= high)
    {
        /* code */
        mid = (low + high) / 2;
        ll temp = x;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= mid)
            {
                temp -=(mid- arr[i]);
            }
            if (temp < 0)
            {
                high = mid - 1;
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            low = mid + 1;
            ans = mid;
        }
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