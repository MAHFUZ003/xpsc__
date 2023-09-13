#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ll s, b;
    cin >> s >> b;
    ll arr[s];
    ll ans[s];
    for (ll i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    vector<pair<ll, ll>> v;
    vector<ll> v1;
    for (ll i = 0; i < b; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.pb(make_pair(x, y));
        v1.pb(x);
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    ll a[b + 1];
    a[0] = 0;
    for (ll i = 1; i <= b; i++)
    {
        a[i] = a[i - 1] + v[i - 1].second;
    }
    for (ll i = 0; i < s; i++)
    {
        auto p = lower_bound(v1.begin(), v1.end(), arr[i]) - v1.begin();
        auto it = v.begin();
        it = next(it, p);
        if (it == v.end())
        {
            ans[i] = a[p];
            continue;
        }
        if ((*it).first > arr[i])
        {
            ans[i] = a[p];
            continue;
        }
        else if ((*it).first == arr[i])
        {
            ans[i] = a[p + 1];
            continue;
        }
    }
    for (ll i = 0; i < s; i++)
    {
        cout << ans[i] << " ";
    }
}
