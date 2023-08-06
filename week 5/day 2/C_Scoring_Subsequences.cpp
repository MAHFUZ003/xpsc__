#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
vector<ll> arr;
// ll return_max_len()
ll bs(int k)
{
    int low = 0, high = k, mid;
    int ans = 0;
    int len;
    while (low <= high)
    {
        mid = (low + high) / 2;
        len = (k - mid) + 1;
        if (arr[mid] >= len)
        {
            ans = len;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
void solve()
{
    arr.clear();
    ll x;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    ll ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = bs(i);
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