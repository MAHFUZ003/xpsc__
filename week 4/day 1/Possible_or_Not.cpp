#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    ll b;
    cin >> n >> b;
    ll arr[n];
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (((arr[i] & b) == b) && (arr[i] >= b))
        {
            v.push_back(arr[i]);
            //  cout<<arr[i]<<nL;
        }
    }

    if (v.size() == 0)
    {
        cout << "NO" << nL;
        return;
    }
    ll x = v[0];
    for (auto l : v)
    {
        x = (x & l);
    }
    if (x == b)
    {
        cout << "YES" << nL;
    }
    else
    {
        cout << "NO" << nL;
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