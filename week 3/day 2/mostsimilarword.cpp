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

#define exp 1e9
#define sz(x) (int((x).size()))
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        // m hocche lenth and n hosse word sonkha
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int totalcost = 100000000;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int cost = 0;
                for (int k = 0; k < m; k++)
                {
                    cost = cost + abs(s[i][k] - s[j][k]);
                }
                totalcost = min(cost, totalcost);
            }
        }
        cout<<totalcost<<endl;
    }
    return 0;
}