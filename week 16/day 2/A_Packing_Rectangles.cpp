#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll n, w, h;
    cin >> w >> h >> n;
    ll ans, low = 0, high = 1e15, mid;

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll levelh = mid / h;
        ll levelw = mid / w;
        if (levelh > 0 && ((n + levelh - 1) / levelh) * w <= mid)
        {
            ans = mid;
            high = mid - 1;
        }
        else

        {
            low = mid + 1;
        }
    }cout<<ans<<nl;
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