#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int up, down;
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // s.insert(arr[i]);
    }

    int ans = 1;
    int u = 0, d = 0;

    for (int i = 1; i < n; i++)
    {
        if (u == 0 && d == 0 && arr[i] != arr[i - 1])
        {
            if (arr[i] > arr[i - 1])
            {
                u = 1;
            }
            else
            {
                d = 1;
            }
            ans++;
        }
        else if (arr[i - 1] < arr[i] && d == 1)
        {
            d = 0, u = 1;
            ans++;
        }
        else if (arr[i - 1] > arr[i] && u == 1)
        {
            d = 1, u = 0;
            ans++;
        }
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