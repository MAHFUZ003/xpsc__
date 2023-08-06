#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    ll l, r, x;
    ll a, b;
    cin >> l >> r >> x;
    cin >> a >> b;
    ll ans = -1;
    if (b < a)
    {
        swap(a, b);
    }
    if (a == b)
    {
        ans = 0;
    }
    else if (abs(b - a) >= x)
    {
        ans = 1;
    }
    else if (a - l >= x && b - l >= x)
    {
        ans = 2;
    }
    else if (r - a >= x && r - b >= x)
    {
        ans = 2;
    }
    else if (r - a >= x && b - l >= x)
    {
        ans = 3;
    }
    else
    {
        ans = -1;
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