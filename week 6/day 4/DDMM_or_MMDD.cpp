#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    string s;
    cin >> s;
    int first = 0, second = 0;
    first = (int(s[0] - '0') * 10) + int(s[1] - '0');
    second = (int(s[3] - '0') * 10) + int(s[4] - '0');
    if (second > 12)
    {
        cout << "MM/DD/YYYY" << nl;
    }
    else if (first > 12)
    {
        cout << "DD/MM/YYYY" << nl;
    }
    else
        cout << "BOTH" << nl;
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