#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    string s[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int row = i, col = i;
        while (row >= 0)
        {
            if (s[row][col] == '1')
            {
                if (row + 1 == n || col + 1 == n || s[row + 1][col] == '1' || s[row][col + 1] == '1')
                {
                    x = 1;
                }
                else
                {
                    cout << "NO" << nl;
                    return;
                }
            }
            row--;
        }
        row = i, col = i;
        while (col >= 0)
        {
            if (s[row][col] == '1')
            {
                if (row + 1 == n || col + 1 == n || s[row + 1][col] == '1' || s[row][col + 1] == '1')
                {
                    x = 1;
                }
                else
                {
                    cout << "NO" << nl;
                    return;
                }
            }
            col--;
        }
    }
    cout << "YES" << nl;
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