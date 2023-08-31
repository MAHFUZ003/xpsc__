#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
const int nn = 100010;

void solve()
{
    int n;
    cin >> n;
    ll x;
    vector<int> v;
    map<int, pair<int, int>> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back(x);
        if (i % 2)
        {
            m[x].first++;
        }
        else
        {
            m[x].second++;
        }
      //  cout << x << " " << m[x].first << " " << m[x].second << endl;
    }
    vector<int> temp;
    temp = v;
    sort(temp.begin(), temp.end());
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            if (m[temp[i-1]].first == 0)
            {
                cout << "NO" << endl;
                return;
            }
            m[temp[i-1]].first--;
        }
        else
        {
            if (m[temp[i-1]].second == 0)
            {
                cout << "NO" << endl;
                return;
            }
            m[temp[i-1]].second--;
        }
        
    }
    cout << "YES" << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    for (int i = 1; i <= ttt; i++)
    {
        solve();
    }
    return 0;
}