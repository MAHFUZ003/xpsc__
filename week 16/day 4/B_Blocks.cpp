#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int hash[n + 1];
    int w = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            hash[i + 1] = 0;
            w++;
        }
        else
        {
            b++;
            hash[i + 1] = 1;
        }
    }
    if (w == n || b == n)
    {
        cout << 0;
        return;
    }
    vector<int> ans;
    for (int i = 1; i < n; i++)
    {
        if (hash[i] == 1)
        {
            hash[i] = 0;
            hash[i + 1] = 1 - hash[i + 1];
            ans.push_back(i);
        }
    }
    if (hash[n] == 1)
    {
        if (n % 2 == 0)
        {
            cout << -1 << nL;
            return;
        }
        for (int i = 1; i < n; i = i + 2)
        {
            ans.push_back(i);
        }
        cout << ans.size() << nL;
        for (auto x : ans)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << ans.size() << nL;
        for (auto x : ans)
        {
            cout << x << " ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}