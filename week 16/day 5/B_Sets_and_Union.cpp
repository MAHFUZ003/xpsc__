#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> v[n];
    int hash[51];
    for (int i = 0; i < 51; i++)
    {
        hash[i] = 0;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
         
            cin >> x;
               v[i].push_back(x);
            hash[x]++;
            if (hash[x] == 1)
            {
                cnt++;
            }
        }
    }
    //cout << cnt << nl;
    int ans = 0;
    int temph[51];
    int tempc = 0;
    for (int j = 1; j <= 50; j++)
    {
        tempc = 0;
        for (int i = 0; i <= 50; i++)
        {
            temph[i] = hash[i];
        }
        for (int i = 0; i < n; i++)
        {
            int f = 0;
            for (auto k : v[i])
            {
                if (k == j)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
               // cout<<"j "<<j<<nl;
                for (auto k : v[i])
                {
                 //   cout<<k<<" "<<temph[k]<<nl;
                    
                    if (temph[k] == 1)
                    {
                        tempc++;
                    }
                  if(temph[k]>=1){  temph[k]--;}
                }
            }
        }
        if (tempc)
        {
           // cout<<" "<<tempc<<nl;
            ans = max(ans, cnt - tempc);
        }
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