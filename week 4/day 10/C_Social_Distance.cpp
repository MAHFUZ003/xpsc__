#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<ll> v;

    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            v.push_back(i + 1);
            ones++;
        }
    }
    if ((s.length() == 1 && ones == 0))
    {
        cout << 1 << nL;
        return;
    }
    ll ans = 0;
    if (ones == 0 || (k) + 1 < v[0])
    {
        v.push_back(1);
        ans = 1;
    }
    //  cout << ans << nL;
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++)
    {
        // cout << v[i] << " " << v[i - 1] << nL;
        ans += ((v[i] - v[i - 1] - k - 1) / (k + 1));

        //   cout << ans << nL;
    }
    ans += ((n - v[v.size() - 1]) / (k + 1));
    cout << ans << nL;
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