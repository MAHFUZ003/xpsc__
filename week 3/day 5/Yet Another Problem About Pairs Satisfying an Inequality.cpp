#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> validNumbers(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            if (arr[i] < i)
            {
                validNumbers[i] = validNumbers[i - 1] + 1;
            }
            else
            {
                validNumbers[i] = validNumbers[i - 1];
            }
        }
        ll ans = 0;
        for (ll j = 2; j <= n; j++)
        {
            if ((arr[j] < j) && (arr[j] > 0))
            {
                ans += validNumbers[arr[j] - 1];
            }
        }
        cout << ans << endl;
    }
}