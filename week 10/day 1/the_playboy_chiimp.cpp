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
    sort(arr, arr + n);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        ll val = 0;
        cin >> val;
        int low = 0, high = n - 1;
        int ans = -1, mid;
        while (low <= high)
        {
            /* code */
            mid = low + (high - low) / 2;

            if (arr[mid] < val)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (ans == -1)
        {
            cout << "X ";
        }
        else
        {
            cout << arr[ans] << " ";
        }
        low = 0, high = n - 1;
        ans = -1, mid;
        while (low <= high)
        {
            /* code */
            mid = low + (high - low) / 2;

            if (arr[mid] <= val)
            {
                // ans = mid;
                low = mid + 1;
            }
            else 
            {
                ans = mid;
                high = mid - 1;
            }
        }
        if (ans == -1)
        {
            cout << "X" << nl;
        }
        else
        {
            cout <<arr [ans ]<< nl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int n, m;
    // cin >> n >> m;
    // int t = 1;
    // while (n != 0 && m != 0)
    // {
    //     cout << "CASE# " << t << ":" << nl;
    solve();
    //     cin >> n >> m;

    //     t++;
    // }
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