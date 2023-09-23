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
    ll sum = 0;
    map<ll, ll> m;
    ll ans = 0;
    m[0]++;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        ll x = sum % n;
        if(x<0)
        {
            x+= n;
        }
       // cout << x << nl;
        ans += m[x];
        m[x]++;
    }
    
    cout << ans << nl;
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