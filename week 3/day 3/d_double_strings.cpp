#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    map<string, int> m;
    int ans[n];
    memset(ans, 0, sizeof(ans));
    string s;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        arr[i] = s;
        m[s]++;
    }

    string z;
    string a, b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            a = "";
            b = "";
            for (int k = 0; k <= j; k++)
            {
                a += arr[i][k];
            }
            for (int k = j + 1; k < arr[i].size(); k++)
            {
                b += arr[i][k];
            }
            if(m[a]>0 && m[b]>0)
            {
                ans[i]=1;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
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