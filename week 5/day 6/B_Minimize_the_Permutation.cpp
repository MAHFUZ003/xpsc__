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
    vector<ll> ans;
    int minimum;
    int min_index;
    for (int i = 0; i < n; i++)
    {
        minimum = arr[i];
        min_index = i;
        for (int j = i; j < n; j++)
        {
            if (minimum > arr[j])
            {
                minimum = arr[j];
                min_index = j;
            }
        }
        if (min_index == i)
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.push_back(minimum);
            for (int k = i; k < min_index - 1; k++)
            {
                ans.push_back(arr[k]);
            }
            arr[min_index] = arr[min_index - 1];
            i = min_index - 1;
        }
    }
    for (int i = 0; i < n; i++)
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