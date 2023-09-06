#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    vector<int> v;
    int f = 1;
    for (auto e : s)
    {
        if (e == '+')
        {
            if (v.size() && v.back() == -1)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(0);
            }
        }
        else if (e == '-')
        {
            int tmp = v.back();
            v.pop_back();
            if (tmp == 1 && v.size())
            {
                v.back() = 1;
            }
        }
        else
        {
            if (e == '1')
            {
                if (v.size() < 2)
                {
                    continue;
                }
                if (v.back() == -1)
                {
                    f = 0;
                }
                else
                {
                    v.back() = 1;
                }
            }
            else
            {
                if (v.size() < 2)
                {
                    f = 0;
                    continue;
                }
                if (v.back() == 1)
                {
                    f = 0;
                }
                else
                {
                    v.back() = -1;
                }
            }
        }
    }
    if (f)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
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