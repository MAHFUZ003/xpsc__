#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, q;
    cin >> n >> q;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<ll, pair<ll, ll>> m;
    ll king = 0;
    if (arr[0] < arr[1])
    {
        king = arr[1];
        m[king].first = 1;
        m[king].second = 1;
        m[arr[0]].first = -1;
        m[arr[0]].second = -1;
    }
    else
    {
        king = arr[0];
        m[king].first = 1;
        m[king].second = 1;
        m[arr[1]].first = -1;
        m[arr[1]].second = -1;
    }
    int fight = 2;
    for (int i = 2; i < n; i++)
    {
        if (arr[i] >= king)
        {
            king = arr[i];
            m[king].first = fight;
            m[king].second = fight;
        }
        else
        {
            m[king].second = fight;
            m[arr[i]].first = -1;
            m[arr[i]].second = -1;
        }
        fight++;
    }


    for (int z = 0; z < q; z++)
    {
        ll k, i;
        int p;
        cin >> p >> k;
        i = arr[p-1];
       // cout << z << " " << i << " " << k << nl;
        if (i == king)
        {
            if (k < m[i].first)
            {
                cout << 0 << nl;
            }
            else
            {
                cout << k - m[i].first + 1 << nl;
            }
        }
        else if (m[i].first > k || m[i].second == -1)
        {
            cout << 0 << nl;
        }
        else if (m[i].second <= k)
        {
            cout << m[i].second - m[i].first + 1 << nl;
        }
        else
        {
            cout << k - m[i].first + 1 << nl;
        }
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