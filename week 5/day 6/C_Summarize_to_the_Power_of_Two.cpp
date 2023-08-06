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
    map<ll, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    ll p = 1;
    vector<ll> v;
    while (p < 1e11)
    {  p = p * 2;
        v.push_back(p);
      
    }
    int f = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        f = 0;
      //  cout<<i<<" "<<arr[i]<<nl;
        for (auto x : v)
        {
          //  cout<<x<<nl;
            if (x < arr[i]|| (x-arr[i]== arr[i]) &&( m[x-arr[i]]==1))
            {
                continue;
            }
            if (m[x - arr[i]] > 0 )
            {
               
            //    cout<<x-arr[i]<<" point "<<nl;
                f = 1;
                
                break;
            }
        }
        if (f == 0)
        {
            cnt++;
        }
    }
    cout << cnt << nl;
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