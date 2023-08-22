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
        int n, x, y;
        cin >> n >> x >> y;
        vector<pair<int, int>> v;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            v.push_back({val, i});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        vector<int> a;
        vector<int> b;
        int p1 = x;
        int p2 = y;
        for (int i = 0; i < n; i++)
        {
            if (p1 <= p2)
            {
                a.push_back(v[i].second);
                p1 += x;
            }
            else
            {
                b.push_back(v[i].second);
                p2 += y;
            }
        }

        cout << a.size() << " ";
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << b.size() << " ";
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}