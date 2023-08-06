#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
int n;

void solve()
{
    cin >> n;
    int arr[n + 1][n + 1];
    string s;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        for (int j = 1; j <= n; j++)
        {

            arr[i][j] = s[j - 1] - '0';
            // cout<<arr[i][j];
        }
        // cout<<nL;
    }
    ll ans = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
     
        for (int j = 1; j <= n; j++)
        {   cnt = 0;
            // cout<<i<<" "<<j<<nL;
            // cout<<j<<" "<<n-i+1<<nL;
            // cout<<n-i+1<<" "<<n-j+1<<nL;
            // cout<<n-j+1<<" "<<i<<nL;
          //  cout<<nL;
            cnt += arr[i][j];
            cnt += arr[j][n - i + 1];
            cnt += arr[n - i + 1][n - j + 1];
            cnt += arr[n - j + 1][i];
           // cout<<cnt<<" "<<4-cnt<<nL;
            ans += min(cnt, 4 - cnt);
        }
    }
    cout << ans / 4 << nL;
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