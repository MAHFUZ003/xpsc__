#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        int n;
        cin >> n;
        ll arr[n];
        ll x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n % 2 == 1)
        {
            ll ans = 0;

            for (int i = 1; i < n; i = i + 2)
            {
                x = 0, y = 0;
                x = max(arr[i - 1], arr[i + 1]);
                if (x >= arr[i])
                {
                    x = x - arr[i];
                    x++;
                    ans += x;
                }
            }
            cout << ans << endl;
        }
        else
        {
            int z = (n - 2) / 2;
            ll odd[z];
            ll even[z];
            int point1 = 0;
            // even pos
            for (int i = 1; i < n - 1; i = i + 2)
            {
                x = 0, y = 0;
                x = max(arr[i - 1], arr[i + 1]);
                if (x >= arr[i])
                {
                    x = x - arr[i];
                    x++;
                }
                else
                {
                    x = 0;
                }
                even[point1] = x;
                // cout << point1 << " " << even[point1] << endl;
                point1++;
            }
            int point2 = 0;
            for (int i = 2; i < n; i = i + 2)
            {
                x = 0, y = 0;
                x = max(arr[i - 1], arr[i + 1]);
                if (x >= arr[i])
                {
                    x = x - arr[i];
                    x++;
                }
                else
                {
                    x = 0;
                }

                odd[point2] = (x);
                // cout << point2 << " " << odd[point2] << endl;
                point2++;
            }
            // even hasing
            for (int i = 1; i < z; i++)
            {
                even[i] += even[i - 1];
                // cout << i << " " << even[i] << endl;
            }
            for (int i = 1; i < z; i++)
            {
                odd[i] += odd[i - 1];
                //  cout << i << " " << odd[i] << endl;
            }
            ll final_ans;
            final_ans = min(odd[z - 1], even[z - 1]);
            for (int i = 0; i < z - 1; i++)
            {
                final_ans = min(even[i] + (odd[z - 1] - odd[i]), final_ans);
                //  final_ans = min(odd[i] + (even[z - 1] - even[i + 1]), final_ans);
            }
            cout << final_ans << endl;
        }
    }
    return 0;
}