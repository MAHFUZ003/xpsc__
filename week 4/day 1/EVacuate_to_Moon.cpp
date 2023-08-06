#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n, m;
    ll h;
    cin >> n >> m >> h;
    vector<ll> cars, outlets;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cars.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        outlets.push_back(h * x);
    }
    sort(cars.begin(), cars.end());
    sort(outlets.begin(), outlets.end());
    int i = n - 1;
    int j = m - 1;
    ll ans = 0;
    while (i >= 0 && j >= 0)
    {
        if (outlets[j] > cars[i])
        {
            ans += cars[i];
        }
        else
        {
            ans += outlets[j];
        }
        i--;
        j--;
    }
    cout<<ans<<nL;
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