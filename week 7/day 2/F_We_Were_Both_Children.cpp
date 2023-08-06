#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin>>n;
    ll arr[n];
    map<ll, int> m;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            ans++;
            continue;
        }
        if (arr[i] > n)
        {
            continue;
        }
        m[arr[i]]++;
    }
    int hash[n + 1];
    memset(hash, 0, sizeof(hash));
    for (auto z : m)
    {

        int cnt = z.second;
        int val = z.first;
        ll i = 1;
        //  hash[val] = cnt;
        while (val * i <= n)
        {
            hash[val * i] += cnt;
            i++;
        }
    }
    int maxi = 0;
    for (int i = 2; i <= n; i++)
    {
        //cout << i << " " << hash[i] << nl;
        maxi = max(maxi, hash[i]);
    }
    cout << ans + maxi << nl;
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