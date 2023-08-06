#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

vector<pair<int, int>> adj[1000005];
vector<int> dp;
map<pair<int, int>, int> rec;
// rec is used to get the index of that edge

void DFS(int curr, int par)
{
    for (auto i : adj[curr])
    {
        int to = i.first;
        int id = i.second;
        if (to == par)
            continue;
        rec[{curr, to}] = id;
        rec[{to, curr}] = id;
        if (dp[curr] != INT_MAX)
        {
            if (curr == 1)
            {
                dp[to] = 1;
            }
            else
            {
                if (id > rec[{curr, par}])
                {
                    dp[to] = dp[curr];
                }
                else
                {
                    dp[to] = dp[curr] + 1;
                }
            }
        }
        DFS(to, curr);
    }
}
void solve()
{

    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        adj[i].clear();
    }

    dp.assign(n + 1, INT_MAX);
    dp[0] = 0;
    dp[1] = 0;
    rec.clear();

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }

    DFS(1, -1);

    int ans = *max_element(dp.begin(), dp.end());

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