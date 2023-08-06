#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
vector<ll> v;
ll check(ll sum)
{
    int divitions = 0;
    ll curr = 0;
    int i = 0;
    while (i < v.size())
    {
        curr += v[i];
        if (curr == sum)
        {
            divitions++;
            curr = 0;
        }
        else if (curr > sum)
        {
            return 1e8;
        }
        i++;
    }
    if (curr > 0)
    {
        return 1e7;
    }
    return (v.size() - divitions);
}
void solve()
{
    v.clear();
    ll x;
    int n;
    cin>>n;
    map<ll, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
        m[x]++;
    }
    if (m.size() == 1)
    {
        cout << 0 << nl;
        return;
    }
    ll sum = 0;
    int ans = n - 1;
  //  cout<<"pl"<<nl;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
     //   cout<<sum<<nl;
        int p = check(sum);
      //  cout<<sum <<" "<<p<<nl;
        ans = min(p, ans);
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