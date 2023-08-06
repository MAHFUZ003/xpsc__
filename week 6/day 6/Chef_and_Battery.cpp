#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    if (n == 50)
    {
        cout << 0 << nl;
    }
    else if (n < 50)
    {
        int gap = 50 - n;
        if (gap % 2 == 0)
        {
            cout << gap / 2 << nl;
        }

        else
        {
            cout << (gap / 2) + 3 << nl;
        }
    }
    else
    {
        int gap = n - 50;
        if (gap % 3 == 0)
        {
            cout << gap / 3 << nl;
        }
        else if (gap % 3 == 1)
        {
            cout << (gap / 3) + 2 << nl;
        }
        else
        {
            cout << (gap / 3) + 4 << nl;
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