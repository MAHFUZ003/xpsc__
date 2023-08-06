#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{

    string s;
    cin >> s;
    int n = s.size();
    int ans = n;

    map<char, bool> visited;

    for (int i = 0; i < n; i++)
    {
        if (visited[s[i]])
        {
            ans -= 2;
            visited.clear();
        }
        else
        {
            visited[s[i]] = true;
        }
    }

    cout << ans << endl;
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