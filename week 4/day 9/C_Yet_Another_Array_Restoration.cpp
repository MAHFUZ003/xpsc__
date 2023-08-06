#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    if (n == 2)
    {
        cout << x << " " << y << nL;
        return;
    }
    vector<ll> ans;
    for (int div = 1; div <= 100; div++)
    {
        if ((y - x) % div == 0 && ((n - 1) * div) >= (y - x))
        {

            ll val = y;
            int cnt = 0;
            while (val >= 1 && cnt < n)
            {
                ans.push_back(val);
                val -= div;
                cnt++;
            }
            val = y + div;
            while (cnt < n)
            {
                ans.push_back(val);
                val += div;
                cnt++;
            }
            break;
        }
    }
    sort(ans.begin(), ans.end());
    for (auto z : ans)
    {
        cout << z << " ";
    }
    cout << nL;
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