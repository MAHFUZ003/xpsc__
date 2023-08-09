#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
   int a[k];
  ll  cell[n] = {0};
    for(int i =0;i<n;i++)
    {
        cell[i]=1e16;
    }
    for (int i = 0; i < k; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        cell[a[i] - 1] = x;
    }
  ll ans[n];
    ans[n - 1] = 1e15;
    if (cell[n - 1] > 0)
    {
        ans[n - 1] = cell[n - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (cell[i] != 0)
        {
            ans[i] = min(ans[i + 1] + 1, cell[i]);
        }
        else
        {
            ans[i] = ans[i + 1] + 1;
        }
    }
  //  ans[0] = min(ans[0], (int)1e15);
    if (cell[0] > 0)
    {
        ans[0] = min(ans[0], cell[0]);
    }
    for (int i = 1; i < n; i++)
    {
        if (cell[i] != 0)
        {
            ans[i] = min(ans[i], min(ans[i - 1] + 1, cell[i]));
        }
        else
        {
            ans[i] = min(ans[i], ans[i - 1] + 1);
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
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