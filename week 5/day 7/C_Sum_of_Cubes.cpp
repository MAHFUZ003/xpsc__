#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
map<ll, int> m;
vector<ll> v;
void pre()
{
    for (ll i = 1; i * i * i <= 1e12 + 3; i++)
    {
        m[i * i * i] = 1;
        v.push_back(i * i * i);
    }
}
void solve()
{
    ll n;
    cin >> n;
    for (auto x : v)
    {
        if (m[n - x])
        {
            cout << "YES" << nl;
            return;
        }
    }
    cout << "NO" << nl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
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