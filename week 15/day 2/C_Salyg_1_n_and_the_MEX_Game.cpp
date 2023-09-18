#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]] = 1;
    }
    ll first_minimum = 0;
    ll second_minimum = 0;
    while (m[first_minimum] != 0)
    {
        first_minimum++;
    }
    second_minimum = first_minimum + 1;
    while (m[second_minimum] != 0)
    {
        second_minimum++;
    }
    ll s = first_minimum;
    // ll ans = first_minimum;
    // int flag = 0;
    // cout<<second_minimum<<" "<<first_minimum<<nl;
    for (int i = 0; i <= 2 * n; i++)
    {
        cout << s << endl;
        m[second_minimum] = 1;

        cout << endl;
        cout << flush;
        cin >> s;
        if (s == -1)
        {
            //   cout << ans << nl;
            return;
        }
    }
}

int main()
{

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