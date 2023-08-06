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

    map<ll, ll> m;
    ll n, k;
    cin >> n >> k;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }
    ll left = -1, right;
    ll ansleft = -1, ansright = 0, maxo = 0;
    int count = 0;
    for (auto x : m)
    {
        if (x.second >= k)
        {
            if (count == 0)
            {
                left = x.first;
                count++;
            }
            else
            {
                if (left + count == x.first)
                {
                    count++;
                }
                else
                {
                    if (count > maxo)
                    {
                        maxo = count;
                        ansleft = left;
                    }
                    count = 1;
                    left = x.first;
                }
            }
        }
        else
        {
            if (count > maxo)
            {
                maxo = count;
                ansleft = left;
            }
        }
    }
    if (count > maxo)
    {
        maxo = count;
        ansleft = left;
    }
    if (ansleft == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ansleft << " " << ansleft + maxo - 1 << endl;
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
    }

    return 0;
}