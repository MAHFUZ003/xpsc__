#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0;
    int p = 0;
    int possible = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            possible = 0;
            break;
        }
        if (sum == 0)
        {
            p = i;
            break;
        }
    }
    if (sum != 0)
    {
        cout << "No" << nl;
        return;
    }
    for (int i = p + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            possible = 0;
            break;
        }
    }
    if (possible)
    {
        cout << "Yes" << nl;
    }
    else
    {
        cout << "No" << nl;
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