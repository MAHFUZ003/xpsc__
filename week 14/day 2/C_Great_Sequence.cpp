#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
        m[a[i]]++;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (m.count(a[i]) == 0)
            continue;
        int tofind = a[i] * x;
        if (m.count(tofind))
            m[tofind]--;
        else
            ans++;
        m[a[i]]--;
        if (m[tofind] == 0)
            m.erase(tofind);
        if (m[a[i]] == 0)
            m.erase(a[i]);
    }
    cout << ans << endl;
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