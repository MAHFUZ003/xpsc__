#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int positions[n];
    for (int i = 0; i < n; i++)
    {
        positions[i] = s[i] - 'a';
    }
    int cnt = 0;
    int ans = 0;
    int final_ans = 1e7;
    int geneal_ans = 0;
    for (int j = 0; j < 26; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (positions[i] == j || i == n - 1)
            {
                geneal_ans = 0;
                if(positions[i]!=j)
                {
                    cnt++;
                }
                while (cnt != 0)
                {
                    cnt /= 2;
                    geneal_ans++;
                }

              ans = max(ans,geneal_ans);

            }
            else
            {
                cnt++;
            }
        }
        final_ans = min(ans,final_ans);
        ans =0;
    }
    cout<<final_ans<<nL;
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