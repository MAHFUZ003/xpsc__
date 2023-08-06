#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
void solve()
{

    int n;
    cin >> n;
    ll x[n + 1], y[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> y[i];
    }
    ll profit[n + 1];

    for (int i = 1; i <= n; i++)
    {
        profit[i] = y[i] - x[i];
    }
    sort(profit + 1, profit + n + 1);
    int i = 1, j = n, cnt = 0;
    while (i < j)
    {
        if (profit[i] + profit[j] >= 0)
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << cnt << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    for (int i = 1; i <= ttt; i++)
    {
        solve();
    }
    return 0;
}