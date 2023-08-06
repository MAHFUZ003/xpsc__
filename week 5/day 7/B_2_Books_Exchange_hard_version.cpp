#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    int vis[n + 1];
    arr[0] = 0;
    vis[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        vis[i] = 0;
    }
    int ans[n + 1];

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            vector<int> v;
            v.push_back(i);
            vis[i] = 1;
            int p = arr[i];
            while (vis[p] != 1)
            {
                /* code */
                vis[p] = 1;
                v.push_back(p);
                p = arr[p];
            }
            for (auto x : v)
            {
                ans[x] = v.size();
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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