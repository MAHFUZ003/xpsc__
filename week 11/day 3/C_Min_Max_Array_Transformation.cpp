#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n), brr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    for (int i = 0; i < n; i++)
    {
        auto x = lower_bound(brr.begin(), brr.end(), arr[i]);
        cout << *x - arr[i] << " ";
    }
    cout << nl;
    // finding maximum array d it can have
    ll maximum_value;
    vector<int> indexes;
    ll ans[n];
    //   cout << "indexes "
    //     << " ";
    for (int i = n - 1; i >= 0; i--)
    {
        if (indexes.size() == 0)
        {
            indexes.push_back(i);
            maximum_value = brr[i];
            continue;
        }
        if (brr[i] >= arr[i + 1])
        {
            indexes.push_back(i);
        }
        else
        {

            for (auto z : indexes)
            {
                //  cout << z << " ";
                ans[z] = maximum_value - arr[z];
            }
            indexes.clear();
            indexes.push_back(i);
            maximum_value = brr[i];
        }
    }
    if (indexes.size() != 0)
    {
        for (auto z : indexes)
        {
            //  cout << z << " ";
            ans[z] = maximum_value - arr[z];
        }
        indexes.clear();
    }
    //   cout << nl;
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
        // cout << "test case:" << i << nl;
        solve();
        // cout << nl;
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