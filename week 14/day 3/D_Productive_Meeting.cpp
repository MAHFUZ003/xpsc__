#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
void solve()
{

    int n;
    cin >> n;
    priority_queue<pair<int, int>> pq;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            pq.push({x, i});
    }
    vector<pair<int, int>> ans;
    while (pq.size() > 1)
    {
        auto f = pq.top();
        pq.pop();
        auto s = pq.top();
        pq.pop();
        ans.push_back({f.second, s.second});
        f.first--;
        s.first--;
        if (f.first)
            pq.push(f);
        if (s.first)
            pq.push(s);
    }
    cout << ans.size() << '\n';
    for (auto i : ans)
        cout << i.first << " " << i.second << "\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}