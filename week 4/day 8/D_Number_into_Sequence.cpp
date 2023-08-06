#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    long long n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (ll i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt > 0)
            v.push_back({cnt, i});
    }
    if (n > 1)
        v.push_back({1, n});
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<long long> ans;
    for (int i = 0; i < v[0].first; i++)
        ans.push_back(v[0].second);
    for (int i = 1; i < (int)v.size(); i++)
    {
        for (int j = 0; j < v[i].first; j++)
            ans[v[0].first - 1] *= v[i].second;
    }
    cout << v[0].first << "\n";
    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
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