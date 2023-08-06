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
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll curr = a[0];
    ll total = 0;
    int flip = 0;
    for (int i = 1; i < n; i++)
    {
        if (flip == 0)
        {
            if (a[i] > a[i - 1])
                curr = a[i];
            else
            {
                total += a[i - 1];
                curr = a[i];
                flip = 1;
            }
        }
        else
        {
            if (a[i] < a[i - 1])
                curr = a[i];
            else
            {
                total -= a[i - 1];
                curr = a[i];
                flip = 0;
            }
        }
    }
    if (flip == 0)
        total += a[n - 1];
    cout << total << "\n";
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