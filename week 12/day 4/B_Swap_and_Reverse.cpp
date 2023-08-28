#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if ( (k%2==0))
    {
        sort(s.begin(), s.end());
        cout << s << nl;
        return;
    }
    vector<char> fir, sec;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            sec.push_back(s[i]);
        }
        else
        {
            fir.push_back(s[i]);
        }
    }
    sort(sec.begin(), sec.end());
    sort(fir.begin(), fir.end());
    string final = "";
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            final += sec[i / 2];
        }
        else
        {
            final += fir[i / 2];
        }
    }

    
    cout << final << nl;
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