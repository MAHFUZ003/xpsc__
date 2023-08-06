#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[10];
    int x;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        arr[x % 10]++;
    }
    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        for (int j = 0; j <= 9; j++)
        {
            if (arr[j] == 0)
            {
                continue;
            }
            if (i == j && arr[i] == 1)
            {
                continue;
            }
            for (int k = 0; k <= 9; k++)
            {
                if (arr[k] == 0)
                {
                    continue;
                }
                if ((k == j && arr[k] == 1) || (k == i && arr[k] == 1) || (k == i && i == j && arr[k] == 2))
                {
                    continue;
                }
                if ((i + j + k) % 10 == 3)
                {
                    // cout << i << " " << j << " " << k << nL;
                    // cout << arr[i] << " " << arr[j] << " " << arr[k] << nL;
                    cout << "YES" << nL;
                    return;
                }
            }
        }
    }
    cout << "NO" << nL;
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