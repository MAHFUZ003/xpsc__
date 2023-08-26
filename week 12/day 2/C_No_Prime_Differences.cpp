#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
bool is_prime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1];
    if (!is_prime(n))
    {
        int cnt = 1;
        for (int j = 1; j <= m; j++)
        {
            for (int i = 1; i <= n; i++)
            {
                arr[i][j] = cnt;
                cnt++;
            }
        }
    }
    else if (!is_prime(m))
    {
        int cnt = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {

                arr[i][j] = cnt;
                cnt++;
            }
        }
    }
    else
    {
        int cnt = 1;
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                arr[i][j] = cnt;
                cnt++;
            }
        }
        for (int i = 2; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                arr[i][j] = cnt;
                cnt++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << nL;
    }
    cout << nL;
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