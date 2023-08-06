#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int len = 1;
    ll ans = 0;
    int f;
    while (len <= n)
    {
        for (int i = 1; i <= n; i++)
        {
            f = 0;
            int point = 1;
            int mini = 1e6;
            int maxi = 0;

            while (i <= n && point <= len)
            {
                maxi = max(arr[i], maxi);
                mini = min(arr[i], mini);
               
                point++;
                i++;
            }
            i--;
            if ((maxi - mini + 1) != len)
            {
                cout << -1 << nL;
                return;
            }
            if (!is_sorted(arr + (i - len + 1), arr + i + 1))
            {
                ans++;
                sort(arr + (i - len + 1), arr + i + 1);
            }
        }

        len = len * 2;
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