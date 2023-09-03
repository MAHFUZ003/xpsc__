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
    ll total_sum = 0;
    map<ll, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total_sum += arr[i];
        m[arr[i]]++;
    }
    priority_queue<ll> pq;
    pq.push(total_sum);
    while (pq.size() > 0 && pq.size() <= n)
    {
        ll top = pq.top();
        pq.pop();
        ll greater = (top + 1) / 2;
        ll smaller = top / 2;
        if(smaller==0)
        {
            break;
        }
        if (m[greater] > 0)
        {
            m[greater]--;
        }
        else
        {
            pq.push(greater);
        }
        if (m[smaller] > 0)
        {
            m[smaller]--;
        }
        else
        {
            pq.push(smaller);
        }
    }
    if (pq.size() == 0 || n==1)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
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