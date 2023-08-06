#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    map<int, vector<int>> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (m[arr[i]].size() == 0)
        {
            m[arr[i]].push_back(0);
        }
        m[arr[i]].push_back(i);
    }

    //   m[i].push_back(n);

    int ans = 1e7;

    for (auto x : m)
    {
        vector<int> gaps;
        for (int i = 0; i < x.second.size()-1; i++)
        {
            gaps.push_back(x.second[i + 1] - x.second[i] - 1);

           // cout << x.second[i] << " " << x.second[i + 1] << nl;
          //  cout<<(x.second[i + 1] - x.second[i] - 1)<<nl;
        }
        gaps.push_back((n + 1) - x.second[x.second.size() - 1]-1);
        sort(gaps.begin(), gaps.end());
        int last = gaps[gaps.size() - 1];
        int sec = gaps[gaps.size() - 2];
       // cout<<last<<" "<<sec<<nl;
    
        ans = min(ans, max(sec, (last ) / 2));
      //  cout<<"ans "<<ans<<nl;
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