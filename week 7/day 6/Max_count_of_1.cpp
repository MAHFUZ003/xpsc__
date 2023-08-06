#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int cnt = 0;
    int x = 0;
    // for o in -th position
    for (int i = 0; i < n; i++)
    {
        cnt += x;
        x = x ^ (int(s[i] - '0'));
    }
    ans = cnt;
    // for 1 in  0 th position
    x = 1;
    cnt=0;
    for (int i = 0; i < n; i++)
    {
        cnt += x;
        x = x ^ (int(s[i] - '0'));
    }
    ans = max(ans, cnt);

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