#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    ll health[n];
    ll power[n];
    for (int i = 0; i < n; i++)
    {
        cin >> health[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> power[i];
    }
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({health[i], power[i]});
    }
    sort(v.begin(), v.end());

    ll hash_min_power[n];
    hash_min_power[n - 1] = v[n - 1].second;
    for (int i = n - 2; i >= 0; i--)
    {
        hash_min_power[i] = min(hash_min_power[i + 1], v[i].second);
    }
    ll attack = 0;
    ll store;
    int z = 0;
    while (z < n)
    {
        attack += k;
        
        
        while (attack >= v[z].first)
        {
            z++;
            if (z == n)
            {
                cout << "YES" << nL;
                return;
            }
        }
        store = hash_min_power[z];
         k = k - store;
        if (k <= 0)
        {
            cout << "NO" << nL;
            return;
        }
       
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    for (int i = 1; i <= ttt; i++)
    {
        solve();
    }
    return 0;
}