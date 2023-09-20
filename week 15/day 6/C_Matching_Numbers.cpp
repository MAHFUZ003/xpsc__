#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "No" << nl;
    }
    else
    {
        cout << "Yes" << nl;
        ll right = n+1;
        vector<pair<ll, ll>> v;
        ll left = n-(n/2) + 1;
        for (int i = 0; i < n / 2; i++)
        {
            v.push_back({left, right});
            left++;
            right++;
        }
        left = 1;
        while (right <= 2 * n)
        {
            v.push_back({left, right});
            left++, right++;
        }
        for (auto x : v)
        {
            cout << x.first << " " << x.second << nl;
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