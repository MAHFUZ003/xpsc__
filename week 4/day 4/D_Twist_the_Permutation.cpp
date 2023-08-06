#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    vector<int> check = v;
    vector<int> ans(n, 0);
    for (int i = n; i >= 1; i--)
    {
        check = v;
        v.clear();
        int idx = -1;
        for (int j = 0; j < n; j++)
        {
            if (check[j] == i)
            {
                idx = j;
                break;
            }
        }

        if (i != idx + 1)
            ans[i - 1] = idx + 1;
        for (int j = idx + 1; j < i; j++)
        {

            v.pb(check[j]);
        }

        for (int j = 0; j <= idx; j++)
        {

            v.pb({check[j]});
        }
    }
    for (int j = 0; j < n; j++)
        cout << ans[j] << ' ';
    cout << endl;
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