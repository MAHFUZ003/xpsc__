#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n + 1];
    arr[0] = 0;
    map<int, int> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        m[arr[i]] = i;
    }
    if (n == 1 || is_sorted(arr+1,arr+n+1))
    {
        cout << 0 << nl;
        return;
    }
    int x, y;
    if (n % 2 == 0)
    {
        x = (n / 2);
        y = (n / 2) + 1;
        while (((((y - x + 1)) <= n) && (m[y] < m[x]) && (m[y] - m[x] == y - x)))
        {
            x++;
            y++;
        }
        cout << "x " << x << " y " << y << nl;
        cout << (n - (y - x + 1 - 2)) / 2;
    }
    else
    {
        x = (n / 2) ;
        y = (n / 2) + 2;
        while (((y - x + 1) <= n) && (m[y] < m[x]) && (m[y] - m[x] == y - x))
        {
            x++;
            y++;
        }
        cout << "x " << x << " y " << y << nl;
        cout << (n - (y - x + 1 - 2)) / 2;
    }
    cout << nl;
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