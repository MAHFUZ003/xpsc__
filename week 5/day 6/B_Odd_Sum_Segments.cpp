#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
        if (sum % 2 == 1)
        {
            v.push_back(i);
            sum = 0;
        }
    }

    if (v.size() < k || (v.size() - k) % 2 == 1)
    {
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;
    for (int i = 0; i < k - 1; i++)
    {
        cout << v[i] << " ";
    }
    cout << n << nl;
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