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
const int N = 1e5 + 10;
void solve()
{
    int n;
    cin >> n;
    int par[n + 1];
    int isleaf[n + 1];
    int isdone[n + 1];
    int root;
    for (int i = 1; i <= n; i++)
    {
        isleaf[i] = 1;
        isdone[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> par[i];

        if (i == par[i])
        {
            root = i;
            par[i] = -1;
            continue;
        }
        isleaf[par[i]] = 0;
    }
    vector<int> leaf;
    for (int i = 1; i <= n; i++)
    {
        if (isleaf[i] == 1)
        {
            leaf.push_back(i);
        }
    }
    cout << leaf.size() << endl;
    for (auto it : leaf)
    {
        vector<int> v;
        int curr = it;
        while (curr != -1 && !isdone[curr])
        {
            v.push_back(curr);
            isdone[curr] = 1;
            curr = par[curr];
        }
        reverse(v.begin(), v.end());
        cout << v.size() << endl;
        for (auto child : v)
        {
            cout << child << " ";
        }
        cout << endl;
    }
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
        cout << endl;
    }
    return 0;
}