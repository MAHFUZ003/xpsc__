#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    int d = 0, u = 0;
    int cnt = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1] && (d == 1) && (u == 1))
        {
            break;
        }
        if (arr[i] < arr[i + 1])
        {
            d = 1;
        }
        if (arr[i] > arr[i + 1] && d == 1)
        {
            break;
        }
        cnt++;
    }
    cout << n - cnt << nl;
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