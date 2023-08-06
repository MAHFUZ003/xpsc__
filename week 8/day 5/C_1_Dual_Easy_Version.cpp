#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{

    int n;
    cin >> n;
    vector<int> arr(n + 1);
    int maxi = -30;
    int maxi_index = 0;
    int mini = 30;
    int miniindex = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (maxi < arr[i])
        {
            maxi = arr[i];
            maxi_index = i;
        }
        if (mini > arr[i])
        {
            mini = arr[i];
            miniindex = i;
        }
    }
    vector<pair<int, int>> ans;
    arr[0] = -50;
    vector<int> brr;
    brr = arr;
    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << 0 << nl;
        return;
    }
    if (maxi > 0)
    {
        for (int i = 2; i <= n; i++)
        {
            while (arr[i] < arr[i - 1])
            {
                ans.push_back({i, maxi_index});
                arr[i] += maxi;
                if (maxi < arr[i])
                {
                    maxi = arr[i];
                    maxi_index = i;
                }
            }
        }
    }
    if (ans.size() > 50 || maxi<=0)
    {
        ans.clear();
        for (int i = n - 1; i >= 1; i--)
        {
            while (brr[i] > brr[i + 1])
            {
                ans.push_back({i, miniindex});
                brr[i] += mini;
                if (mini > brr[i])
                {
                    mini = brr[i];
                    miniindex = i;
                }
            }
        }
    }

    cout << ans.size() << nl;
    for (auto x : ans)
    {
        cout << x.first << " " << x.second << nl;
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