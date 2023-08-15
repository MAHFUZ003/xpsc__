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
    ll hash[n + 1];
    memset(hash, 0, sizeof(hash));
    vector<ll> store;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= n)
        {
            int x =arr[i];
            if (hash[x] == 0)
            {
                hash[x] = 1;
            }
            else
            {
                store.push_back((ll)(x));
            }
        }
        else
        {
            store.push_back(arr[i]);
        }
    }
    vector<ll> needed;
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            needed.push_back(i);
            //cout<<"index "<< i<<nl;
        }
    }
    sort(needed.begin(), needed.end());
    sort(store.begin(), store.end());
    for (int i = 0; i < store.size(); i++)
    {
     //   cout << i << " " << store[i] << " " << needed[i] << nl;
        if (store[i] <= (ll)(needed[i] * 2))
        {
            cout << -1 << nl;
            return;
        }
    }
    cout << store.size() << nl;
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