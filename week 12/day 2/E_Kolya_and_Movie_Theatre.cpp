#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, m;
    ll d;
    cin >> n >> m >> d;
    ll arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll last_index = 0;
    ll cnt = 0;
    ll sum = 0;
    ll ans = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > 0)
        {
            if (cnt < m)
            {
                sum += arr[i];
                cnt++;
                pq.push(arr[i]);
            }
            else
            {
                sum += arr[i];
                pq.push(arr[i]);
                sum -= pq.top();
                pq.pop();
            }
            ans = max(ans, sum - i * d);
        }
    }
    cout << ans << nl;
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