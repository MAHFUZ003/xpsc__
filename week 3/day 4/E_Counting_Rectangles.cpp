#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;   int q;
    cin >> n;
    cin >> q;
   ll arr[1001][1001];
    memset(arr, 0, sizeof(arr));
    int hi, wi;
    for (int i = 0; i < n; i++)
    {
        cin >> hi >> wi;
        arr[hi][wi] += (hi * wi);
    }
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            arr[i][j] += arr[i - 1][j];
        }
    }
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            arr[i][j] += arr[i][j - 1];
        }
    }
    int hs, ws, he, we;
    for (int i = 0; i < q; i++)
    {
        cin >> hs >> ws >> he >> we;
        cout << arr[he - 1][we - 1] - arr[hs][we-1] - arr[he-1][ws] + arr[hs][ws] << nL;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {//cout<<"ok ";
        solve();
    }
    return 0;
}