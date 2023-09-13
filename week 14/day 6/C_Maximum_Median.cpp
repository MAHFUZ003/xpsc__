#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    ll k;
    cin >> n;
    cin >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int median = (n) / 2;
    ll low = arr[median];
    ll high = 1e15;
    ll mid;
    ll ans = 0;
    while (low <= high)
    {
        ll temp = k;
        mid = (low + high) / 2;
        int f = 0;
        for (int i = median; i < n; i++)
        {
            if (arr[i] >= mid)
            {
                ans = mid;
                low = mid + 1;
                f = 1;
                break;
            }
            if (arr[i] + temp >= mid)
            {
                temp -= (mid - arr[i]);
            }
            else
            {
                high = mid - 1;
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            low = mid + 1;
            ans = mid;
        }
    }
    cout << ans << endl;
}
int main()
{

    solve();

    return 0;
}