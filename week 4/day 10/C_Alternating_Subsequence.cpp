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
    int p = 0, ne = 0;
    vector<ll> positive, negative;
    if (arr[0] > 0)
    {
        p = 1;
    }
    else
    {
        ne = 1;
    }
    ll x = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (p)
        {
            while (i < n && arr[i] > 0)
            {
                if (arr[i] > x)
                {
                    x = arr[i];
                }
                i++;
            }
            positive.push_back(x);
            if (i != n)
            {
                p = 0;
                ne = 1;
                x = arr[i];
            }
            i--;
        }
        else
        {
            while (i < n && arr[i] < 0)
            {
                if (arr[i] > x)
                {
                    x = arr[i];
                }
                i++;
            }
            negative.push_back(x);
            if (i != n)
            {
                p = 1;
                ne = 0;
                x = arr[i];
            }
            i--;
        }
    }
    ll postivie_sum = 0;
    ll negative_sum = 0;
    for (auto z : positive)
    {
        postivie_sum += z;
        // cout << z << nl;
    }
    for (auto z : negative)
    {
        negative_sum += z;
        // cout << z << nl;
    }

    cout << postivie_sum + negative_sum << nl;
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