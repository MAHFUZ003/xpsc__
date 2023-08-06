#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    map<ll, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
        if (i > 0 && arr[i] == arr[i - 1])
        {
            m[arr[i]]--;
        }
    }
    if (n == 1)
    {
        cout << 0 << nL;
        return;
    }
    m[arr[0]]--;
    m[arr[n - 1]]--;
    int ans = 1e7;
    for (auto x : m)
    {
        ans = min(ans, x.second + 1);
    }
    cout << ans << nL;
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