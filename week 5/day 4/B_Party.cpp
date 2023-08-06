#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    ll arr[n + 1];
    vector<ll> adj[n + 1];
    ll deg[n + 1];
    for (int i = 1; i <= n; i++)
    {
        deg[i] = 0;
        cin >> arr[i];
    }
    ll cakes = m;
    ll ans = 0;
    ll x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        deg[x]++, deg[y]++;
    }
    if (cakes % 2 == 0)
    {
        cout << "0" << nl;
        return;
    }
   ll  s1=1000000, s2=1000000;
        for(int i=1; i<=n; i++)
        {
          ll   l=deg[i];
            if((l%2)==1){
                s1=min(s1, arr[i]);
            }else{
                for(int j=0; j<l; j++)
                {
                    if(deg[adj[i][j]]%2==0){
                        s2=min(s2, arr[i]+arr[adj[i][j]]);
                    }
                }
            }
        }
        ans=min(s1, s2);
        
        cout<<ans<<"\n";
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