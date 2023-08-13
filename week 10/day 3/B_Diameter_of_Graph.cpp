#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{

    ll n, m, k;
    cin >> n >> m >> k;
    if (n - 1 > m || m > (n * (n - 1)) / 2 || k<=1)
    {
        cout << "NO" << nL;
        return;
    }
    int ans = 2;
    if (m == (n * (n - 1)) / 2)
    {
        ans = 1;
    }
    if (ans <= k - 2 || n == 1)
    {
        cout << "YES" << nL;
    }
    else
    {
        cout << "NO" << nL;
    }
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