#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define endl "\n"
#define _itr ::iterator
#define int long long

typedef long long ll;

signed main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());

        int res = LLONG_MAX;
        int k = 1;
        while (pow(k, n - 1) <= pow(10, 10))
        {
            k++;
        }
        k--;
        // cout << k;
        for (int i = 1; i <= k; ++i)
        {
            int tmp = 0;
            for (int j = 0; j < n; ++j)
                tmp += abs(a[j] - pow(i, j));
            res = min(res, tmp);
        }
        cout << res;
    }
    return 0;
}