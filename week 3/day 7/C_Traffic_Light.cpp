#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    char x;
    cin >> x;
    string s;
    cin >> s;
 int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == x)
        {
            int from = i;
            int last = i;
            while (s[(i + n) % n] != 'g')
            {
                i++;
                last++;
            }
            ans = max(last - from, ans);
        }
    }
    cout<<ans<<nL;
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