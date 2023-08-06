#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int q;
    cin >> q;
    map<ll, int> pre;
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        pre[a]++;
        pre[b + 1]--;
    }
    int sum = 0;
    int ans = 0;
    for (auto z : pre)
    {
        sum += z.second;
        ans = max(ans, sum);
    }
    if (ans >= 3)
    {
        cout << "NO" << nl;
    }
    else
    {
        cout << "YES" << nl;
    }
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