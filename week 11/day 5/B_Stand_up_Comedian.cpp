#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int one, two, thr, fou;
    int a = 0, b = 0;
    cin >> one >> two >> thr >> fou;
    if (one == 0)
    {
        cout << 1 << nl;
        return;
    }
    int ans = 0;
    ans += one;
    a = one, b = one;
    int v = min(two, thr);
    two -= v;
    thr -= v;

    ans +=2*v;
    v = min(one, max(two, thr));
    ans += v;
    one -= v;
    if(two>0)
    {
        two -= v;
    }
    else
    {
        thr -= v;
    }
    a -= v;
    v = min(one, fou);
    one -= v;
    fou -= v;
    ans += v;
    a -= v;
    if (two + thr + fou != 0 && a == 0)
    {
        ans++;
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