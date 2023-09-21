#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt =0;
    if (n == 1)
    {cout<<0<<nl;
        cout << s << nl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n && s[i] == s[i + 1])
        {
            int j = i + 1;
            while (j < n && s[j] == s[j - 1])
            {
                j++;
            }
            if (j == n)
            {
                for (int k = i + 1; k < n; k += 2)
                {
                    if (s[i] == 'B')
                    {cnt++;
                        s[k] = 'G';
                    }
                    else
                    {cnt++;
                        s[k] = 'B';
                    }
                }
            }
            else
            {
                int end = j;
                for (int k = i + 1; k < end; k += 2)
                {
                    if ((s[i] == 'B' && s[end] == 'R') || (s[end] == 'B' && s[i] == 'R'))
                    {cnt++;
                        s[k] = 'G';
                    }
                    else if ((s[i] == 'B' && s[end] == 'G') || (s[end] == 'B' && s[i] == 'G'))
                    {cnt++;
                        s[k] = 'R';
                    }
                    else
                    {cnt++;
                        s[k] = 'B';
                    }
                }
            }

            i = j - 1;
        }
    }
    cout<<cnt<<nl;
    cout<<s<<nl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// check constraints
// at first try a brute force way to solve
// then optimization

//  if its array:
//  1. try greedy
//  2. if it is a result of subproblems try dp
//  3. if it is showing for  a range minimum or maximum
//    3.1 tttttffffff
//    else
//    3.2 ffffftttttt
//    try binary search