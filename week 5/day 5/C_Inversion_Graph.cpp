#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    int ar[n + 3];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    int ans = 1;
    int val = ar[1];
    int cnt = 1;
    for (int i = 2; i <= n; i++)
    {
        if (ar[i] > val)
        {
            if (cnt == val)
            {
                // cout<<i<<" "<<val<<" "<<cnt<<" "<<ans<<endl;
                ans++;
            }
            val = ar[i];
        }

        cnt++;
    }
    cout << ans << endl;
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