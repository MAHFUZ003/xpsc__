#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll n;
    int m;
    cin >> n >> m;
    ll arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    vector<ll> values;
    for (int i = 0; i < m; i++)
    {
        if (i == m - 1)
        {
            values.push_back(abs(n - arr[m - 1] + arr[0] - 1));
        }
        else
        {
            values.push_back(abs(arr[i + 1] - arr[i] - 1));
        }
    }
    sort(values.begin(),values.end());

    ll process=0;
    ll ans=0;
    for(int i =m-1;i>=0;i--)
    {
        if(values[i]-process*2-1 >=1)
        {//cout<<i<<" "<<(values[i]-process*2-1)<<nl;
            ans += (values[i]-process*2-1);
            process+=2;
        }
        else if( values[i]-process*2 ==1)
        {
            ans++;
            break;
        }
        else
        {
            break;
        }
    }
    cout<<n-ans<<nl;
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