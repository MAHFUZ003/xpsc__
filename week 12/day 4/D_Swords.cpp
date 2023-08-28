#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin>>n;
    ll arr[n];
    ll maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (maxi <= arr[i])
        {
            maxi = arr[i];
        }
    }
    ll total = 0;
    vector<ll> gaps;
    ll gcdd = 0;
    for (int i = 0; i < n; i++)
    {
        gaps.push_back(maxi - arr[i]);
        gcdd = __gcd(gcdd, maxi - arr[i]);
        total += (maxi - arr[i]);
    }
    cout << total / gcdd << " " << gcdd << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

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