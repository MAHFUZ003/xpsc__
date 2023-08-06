#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    ll l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    int left_pos, right_pos;
    for (int i = 0; i < n; i++)
    {
        if (l > v[i])
        {
            auto lower = lower_bound(v.begin(), v.end(), l - v[i]);
            left_pos = lower - v.begin();
        }
        else
        {
            left_pos = 0;
        }

        auto upper = upper_bound(v.begin(), v.end(), r - v[i]);
        right_pos = upper - v.begin();

        if (v[i] + v[right_pos] > r || upper ==v.end())
        {
            right_pos--;
        }
        if (i <= right_pos && i >= left_pos)
        {
            right_pos--;
        }
        ans += (right_pos - left_pos) + 1;
    }
    cout << ans/2 << nL;
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