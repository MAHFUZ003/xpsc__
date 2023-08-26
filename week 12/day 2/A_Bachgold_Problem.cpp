#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    if (n % 2 == 0)
    {cout<<n/2<<nl;
        for (int i = 1; i * 2 <= n; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout<<n/2<<nl;
        for (int i = 1; i * 2 <= n - 3; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
    cout << nl;
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