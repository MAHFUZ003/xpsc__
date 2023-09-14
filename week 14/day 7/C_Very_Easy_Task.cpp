#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int  n;ll k;
    cin >> k >> n;
    ll arr[n];
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    ll low = 0;
    ll high = 1e12;
    ll mid;
    ll ans = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (mid * k > total)
        {
            high = mid - 1;
            continue;
        }
        ll current = 0;
        for (int i = 0; i < n; i++)
        {
            current += min(arr[i], mid);
        }
        if (current >= k * mid)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
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