#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxbit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int b = 0; b < 61; b++)
        {
            if ((((1ll) << b) & a[i]) > 0)
            {
                maxbit = max(maxbit, b);
            }
        }
    }
    int cnt = 0;
  //  cout<<maxbit<<nL;
    for (int i = 0; i < n; i++)
    {
        cnt += (((1ll << maxbit) & a[i]) > 0);
    }

    cout << (cnt + 1) / 2 << nL;
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