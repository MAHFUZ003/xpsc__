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
void solve()
{
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;



    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(sx-1 - i) + abs(sy-1 - m + 1) <= d)
        {
            flag = 1;
        }
    }
    for (int j = 0; j < m; j++)
    {
        // flag += arr[0][j];
        if (abs(sx-1 - 0) + abs(sy -1- j) <= d)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << n + m - 2 << endl;
        return;
    }

    flag = 0;
    for (int i = 0; i < n; i++)
    {
        // flag += arr[i][0];
        if (abs(sx -1- i) + abs(sy -1- 0) <= d)
        {
            flag = 1;
        }
    }
    for (int j = 0; j < m; j++)
    {
        // flag += arr[n - 1][j];
        if (abs(sx -1- n + 1) + abs(sy-1 - j) <= d)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << n + m - 2 << endl;
        return;
    }
    cout << -1 << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}