#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    int s;
    cin >> n >> s;
    int arr[n];
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cnt += arr[i];
    }
    if (cnt == s)
    {
        cout << 0 << nL;
        return;
    }
    if (cnt < s)
    {
        cout << -1 << nL;
        return;
    }
    int hash[n + 2];
    memset(hash, 0, sizeof(hash));
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i - 1] == 1)
        {
            hash[p] = i;
            p++;
        }
    }
    hash[p]=n+1;
    int ans = 1e7;
    for (int i = 0; i <= cnt - s + 1; i++)
    {
        if (i + s > cnt)
        {
            break;
        }
   //     cout<<i <<" "<< ans<<" "<<hash[i]<<" "<<hash[i+s+1]<<nL;
        ans = min(ans, hash[i] + (n - (hash[i + s + 1]-1)));
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