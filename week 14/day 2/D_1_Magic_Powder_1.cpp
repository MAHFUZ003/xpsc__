#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1000000000;

void Strangelove()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n), a(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = 2 * N, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2, x = m;
        bool ok = true;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] * mid < a[i])
                continue;
            else if (v[i] * mid <= x + a[i])
            {
                ll aa = v[i] * mid;
                aa -= a[i];
                x -= aa;
            }
            else
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            l = mid + 1;
            ans = max(ans, mid);
        }
        else
            r = mid - 1;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    Strangelove();
    return 0;
}
