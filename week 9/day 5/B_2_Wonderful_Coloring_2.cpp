#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    map<ll, vector<ll>> mp;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]].push_back(i);
    }
    vector<int> store;
    for (auto z : mp)
    {
        if (z.second.size() > k)
        {
            for (int i = 0; i < k; i++)
            {
                store.push_back(z.second[i]);
            }
        }
        else
        {
            for (int i = 0; i < z.second.size(); i++)
            {
                store.push_back(z.second[i]);
            }
        }
    }
    int f = store.size() / k;
    f = f * k;
    ll final[n];
    memset(final,0,sizeof(final));
    for(int i =0;i<f;i++)
    {
        final[store[i]]=( i%k)+1;

    }
    for(int i =0;i<n;i++)
    {
        cout<<final[i]<<" ";
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