#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    string s, t;
    cin >> s >> t;
    int i = s.length();
    int j = t.length();
    while (i >= 0 && j >= 0)
    {
        if (s[i] == t[j])
        {
            i--, j--;
        }
        else
        {
            break;
        }
    }
    cout << i + j + 2 << nl;
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