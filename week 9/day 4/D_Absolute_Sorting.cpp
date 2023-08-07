
#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int low = 0;
        int high = 1e9;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                continue;
            }
            else if (v[i] < v[i + 1])
            {
                int x = (v[i] + v[i + 1]) / 2;
                high = min(high, x);
            }
            else
            {
                int x = (v[i] + v[i + 1] + 1) / 2;
                low = max(low, x);
            }
        }

        if (high >= low)
        {
            cout << high << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}