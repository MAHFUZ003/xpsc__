#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    vector<int> y(n);
    y[0] = 0;
    for (int i = 1; i < n; i++)
        y[i] = ((y[i - 1] ^ x[i - 1]) | x[i]) ^ x[i];
    for (int i = 0; i < n; i++)
    {
        if (i)
            cout << " ";
        cout << y[i];
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
//  if its array:
//  1. try greedy
//  2. if it is a result of subproblems try dp
//  3. if it is showing for  a range minimum or maximum
//    3.1 tttttffffff
//    else
//    3.2 ffffftttttt
//    try binary search