#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a % b < b - 1 && c % d < d - 1 || a % b == b - 1 && c % d == d - 1)
    {
        cout << 1 << nl;
        return;
    }
    cout << lcm(b, d) - a % b << nl;
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