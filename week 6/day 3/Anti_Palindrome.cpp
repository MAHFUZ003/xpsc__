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
    int v[26];
    memset(v, 0, sizeof(v));
    for (int i = 0; i < n; i++)
    {
        v[int(s[i] - 'a')]++;
    }
    int distinct_char = 0, odd_cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] > 0)
        {
            distinct_char++;
            if (v[i] % 2)
            {
                odd_cnt++;
            }
        }
    }
    if (n % 2 == 0)
    {
        if (odd_cnt == 0)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << 0 << nl;
        }
    }
    else
    {
        if (odd_cnt == 1 && distinct_char == 1)
        {
            cout << 2 << nl;
        }
        else if (odd_cnt == 1)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << 0 << nl;
        }
    }
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