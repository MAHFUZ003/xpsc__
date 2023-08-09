#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
const int N = 250000;
vector<int> adj_list[N];
bool visited[N];
ll arr[N];
ll ans = 0;
int dis[N];
int n, m;

void dfs(int node, int par)
{
    visited[node] = 1;
    dis[node] = arr[node];
    if (par != -1)
    {
        if (arr[node] == 1 && arr[par] == 1)
        {
            dis[node] += dis[par];
        }
    }
    if (dis[node] > m)
    {
        return;
    }
    for (int adj_node : adj_list[node])
    {
        if (adj_node == -1)
        {
            continue;
        }
        if (visited[adj_node] == 0)
        {
            dfs(adj_node, node);
        }
    }

    if (adj_list[node].size() == 1 && dis[node] <= m)
    {

        ans++;
    }
   // cout << node << " " << dis[node] << " " << ans << nl;
}
void solve()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        adj_list[i].clear();
        visited[i] = 0;
        dis[i] = 0;
    }
  adj_list[0].push_back(-1);
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        x--, y--;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    dfs(0, -1);
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