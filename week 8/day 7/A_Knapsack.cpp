#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, w;
    cin >> n >> w;
    ll arr[n];

    vector<pair<ll, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        v.push_back({arr[i], i + 1});
    }
    ll c = 0;
    vector<int> ans;
    sort(v.begin(),v.end());
    for (int i = n - 1; i >= 0; i--)
    {
        if (c + v[i].first <= w)
        {
            c += v[i].first;
            ans.push_back(v[i].second);
        }
    }
    if (c*2 <w || c==0)
    {
        cout << -1 << nl;
        return;
    }
    cout<<ans.size()<<nl;
    for (auto z : ans)
    {
        cout << z << " ";
    }
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