#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define MOD 1000000007
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int left = 0, right =n-1, ans = INT_MAX, cnt = 0, f = 0;
    for (int i = 0; i < 26; i++)
    {
        int flag = 0;
        left = 0, right = n - 1, cnt = 0;
        char x = (char)('a' + i);
        while (left <= right)
        {
            if (s[left] == s[right])
            {
                left++;
                right--;
                continue;
            }
            if (s[left] != s[right])
            {
                if (s[left] == x)
                {
                    cnt++;
                    left++;
                }
                else if (s[right] == x)
                {
                    cnt++;
                    right--;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            f = 1;
            ans = min(cnt, ans);
        }
    }
    if (f == 1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    for (int i = 1; i <= ttt; i++)
    {
        solve();
    }
    return 0;
}