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
    vector<ll> ans;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ans.push_back(abs(arr[i] - arr[i + 1]));
        }
        else if (i == n - 1)
        {
            ans.push_back(abs(arr[i] - arr[i - 1]));
        }
        else
        {
            ans.push_back(max(abs(arr[i] - arr[i + 1]), abs(arr[i] - arr[i - 1])));
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans[0];
    cout<<nl;
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