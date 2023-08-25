#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    int hash[100001];
    int x;
    memset(hash, 0, sizeof(hash));
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        hash[x]++;
    }
    bool prime[100000 + 1];
    memset(prime, true, sizeof(prime));
    int ans = 0;
    int cnt = 0;
    for (int p = 2; p * p <= 100000; p++)
    {
        cnt = 0;
        if (prime[p] == true)
        {
            // cout << " p " << p << nl;
            if (hash[p] > 0)
            {
                cnt += hash[p];
            }
          
            for (int i = p * p; i <= 10000; i += p)
            {
                prime[i] = false;
             
                if (hash[i] > 0)
                {
               //    cout<<i<< " "<<hash[i]<< " "<<cnt<<nl;
                    cnt += hash[i];
                }
            }
            
        }
        ans = max(ans, cnt);
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