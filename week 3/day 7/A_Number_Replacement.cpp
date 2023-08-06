#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    map<int, char> m;
    for (int i = 0; i < n; i++)
    {
        if (m[arr[i]] >= 'a' && m[arr[i]] <= 'z')
        {
            if (m[arr[i]] == s[i])
            {
                continue;
            }
            else
            {
                // cout << m[s[i]] << " " << arr[i];
                cout << "NO" << nL;
                return;
            }
        }
        else
        {
            m[arr[i]] = s[i];
        }
    }
    cout << "YES" << nL;
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