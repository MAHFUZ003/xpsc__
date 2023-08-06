#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    m++;
    ll arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
  
        for (int j =0; j < m-1; j++)
        {
            int cnt = 0;
            ll tm1 = arr[m-1];
            ll tm2 = arr[j];
            while (tm1 > 0 || tm2 > 0)
            {
                if (tm1 % 2 != tm2 % 2)
                {
                    cnt++;
                }
                tm1 /= 2;
                tm2 /= 2;
            }
            if (cnt <= k)
            {
                ans++;
            }
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