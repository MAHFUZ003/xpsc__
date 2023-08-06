#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n + 2];
    for (int i = 0; i <= n + 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr +( n + 2));
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum == arr[n] || sum == arr[n + 1])
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << nL;
        return;
    }
    sum += arr[n];
   // cout<<sum<<nL;
    for (int i = 0; i < n; i++)
    {
        if (sum - arr[i] == arr[n + 1])
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                cout << arr[j] << " ";
            }
            cout << nL;
            return;
        }
    }
    cout << -1 << nL;
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