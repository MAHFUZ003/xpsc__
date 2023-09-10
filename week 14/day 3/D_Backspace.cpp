#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int ttt;
    cin >> ttt;
    for (int tt = 0; tt < ttt; tt++)
    {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        int i = n - 1;
        int f = 1;
        for (int j = m - 1; j >= 0; j--)
        {
            while (i >= 0 && s[i] != t[j])
            {
                i -= 2;
            }
            if (i < 0)
            {
                f = 0;
                break;
            }
            i -= 1;
        }
        if (f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}