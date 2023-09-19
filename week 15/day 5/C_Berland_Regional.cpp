#include <bits/stdc++.h>
using namespace std;
//#define read(type) readInt<type>() // Fast read
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> v[n + 3];
    ll loc[n];
    for (int i = 0; i < n; i++)
    {
        cin >> loc[i];
    }
    ll x;
    for (int j = 0; j < n; j++)
    {
        cin >> x;
        v[loc[j]].push_back(x);
    }
    // cout << "ok2=3";
    vector<ll> pre[n + 3];
    for (int i = 1; i < n + 1; i++)
    {
        if (v[i].size() == 0)
        {
            continue;
        }
        sort(v[i].begin(), v[i].end());
        //   pre[i].push_back(v[i][0]);
        for (int j = 1; j < v[i].size(); j++)
        {
            v[i][j] = (v[i][j] + v[i][j - 1]);
        }
    }
    ll ans[n + 1];
    memset(ans, 0, sizeof(ans));

    ll last = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i].size() == 0)
        {
            continue;
        }
        else
        {
            ll x = 1;
            while (x <= v[i].size())
            {
                if (v[i].size() % x == 0)
                {
                    ans[x] += v[i][v[i].size() - 1];
                }
                else
                {
                    ll mo = v[i].size() % x;
                    mo--;
                    ans[x] += v[i][v[i].size() - 1] - v[i][mo];
                }
                x++;
            }
        }
        //  ans = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{

    int ttt;
    cin >> ttt;
    //  cout << "ok";
    while (ttt--)
    {
        // cout << "ok1";
        solve();
    }
    return 0;
}