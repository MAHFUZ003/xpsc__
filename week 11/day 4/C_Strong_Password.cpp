#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{

    string s;
    cin >> s;
    int m;
    cin >> m;
    string l, r;
    cin >> l >> r;
    vector<int> indexes[10];
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        indexes[(int)(s[i] - '0')].push_back(i);
    }
    int last = -1;
    int new_val = 0;
    for (int i = 0; i < m; i++)
    {
        int start = (int)(l[i] - '0');
        int end = (int)(r[i] - '0');
        for (int j = start; j <= end; j++)
        {
            auto x = upper_bound(indexes[j].begin(), indexes[j].end(), last);
            if (x == indexes[j].end())
            {
              //  cout << i << " " << j << " " << *x << " " << last << " " << nl;
                cout << "YES" << nl;
                return;
            }
            else
            {
                int val = *x;
                new_val = max(new_val, val);
            }
        }
        last = new_val;
    }

    cout << "NO" << nl;
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