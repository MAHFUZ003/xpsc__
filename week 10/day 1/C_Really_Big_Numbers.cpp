#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
ll n, s;
ll sumof(ll x)
{
    ll ans = 0;
    while (x)
    {
        ans += (x % 10);
        x /= 10;
    }
    return ans;
}
void solve()
{
    cin >> n >> s;
    ll low, ans, mid, high;
    low = 0, high = n ;
    while (low <= high)
    {
        /* code */
        mid = low + (high - low) / 2;

        ll x = sumof(mid);
        if (x + s <= mid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    ll f = n - ans;
    if (f >= 0)
    {
        cout << f << nl;
      //  cout << ans << nl;
    }
    else
        cout << 0 << nl;
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