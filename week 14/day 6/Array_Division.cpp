#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sort(arr, arr + n);

    ll low = 1;
    ll high = 1e18;
    ll mid;
    ll ans = 0;
    int f = 0;
    while (low <= high)
    {
        f = 0;
        int cnt = 1;
        ll current = 0;
        mid = (low + high) / 2;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mid)
            {
                f = 1;

                break;
            }
            if (current + arr[i] > mid)
            {
                cnt++;
                current = arr[i];
            }
            else
            {
                current+= arr[i];
            }
           // cout << i << " " << current << " " << cnt << endl;
        }
        if (cnt > k || f == 1)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            high = mid - 1;
         //   cout << mid << " " << cnt << endl;
        }
    }
    cout << ans << endl;
}
int main()
{

    solve();

    return 0;
}