#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{

    int n, x;
    cin >> n >> x;
    int ar[n + 3], br[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        br[i] = ar[i];
    }
    sort(ar, ar + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != br[i] && i < x && (n - i) <= x)
        {
            ans = 1;
            break;
        }
    }
    if (ans == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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