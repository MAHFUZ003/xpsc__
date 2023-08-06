#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    map<ll, int> m;
    ll x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }
    int ans = 0;
    ll fir, sec;
    for (auto z : m)
    {
        sec = z.first;
        fir = sec - 1;
        ans += (max(0, m[sec] - m[fir]));
    }
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