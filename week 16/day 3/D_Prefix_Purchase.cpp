

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n;
        vector<pair<ll, ll>> crr;
        vector<pair<ll, ll>> cr;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            cr.push_back({x, i + 1});
        }
        cin >> k;

        sort(cr.begin(), cr.end());

        cr.push_back({0, 0});

        for (ll i = 0; i < n; i++)
        {
            if (cr[i + 1].first != cr[i].first)
            {
                crr.push_back({cr[i].first, cr[i].second});
            }
        }
        ll st = 0;
        ll prev = -1;

        stack<pair<ll, ll>> s;
        ll mx = INT_MAX;
        s.push({0, mx});
        // vector<ll> vec;
        map<ll, ll> mp;
        ll pv = 0;
        for (auto i : crr)
        {
            if (i.second < prev)
            {
                continue;
            }

            prev = i.second;
            mp[i.first] = i.second;

            if (s.empty())
            {
                break;
            }

            pair<ll, ll> pr = s.top();

            ll diff = (i.first - pr.first);

            ll lm = (k / diff);

            lm = min(lm, pr.second);

            k -= (lm * (diff));

            // cout<<k<<endl;

            s.pop();

            s.push({pr.first, pr.second - lm});

            s.push({i.first, lm});
        }
        vector<ll> ans(n + 1, 0);

        while (!s.empty())
        {
            pair<ll, ll> pr = s.top();
            s.pop();

            // cout<<pr.first<<" "<<pr.second<<endl;

            // cout<<mp[pr.first]<<endl;

            ans[mp[pr.first]] = pr.second;
        }

        for (ll i = n - 1; i >= 1; i--)
        {
            ans[i] += ans[i + 1];
        }

        for (ll i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}