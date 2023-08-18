#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
const int MOD = 1e9+7;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 1;
    for (int i = 0; i < k; i++)
    {
        ans = (ans * n) % MOD;
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