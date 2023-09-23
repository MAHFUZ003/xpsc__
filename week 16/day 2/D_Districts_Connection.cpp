#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    set<ll> s;
    int n;
    cin >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        s.insert(ar[i]);
    }
    if (s.size() == 1)
    {
        cout << "NO" << nL;
        return;
    }
    ll first = ar[0];
    ll y;
    cout << "YES" << nL;
    for (ll i = 0; i < n; i++)
    {
        if (ar[i] != first)
        {
            cout << 1 << " " << i + 1 << nL;
            y = i + 1;
        }
    }

    for (ll i = 1; i < n; i++)
    {
        if (ar[i] == first)
        {
            cout << y << " " << i + 1 << nL;
        }
    }
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