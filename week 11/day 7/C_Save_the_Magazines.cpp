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
    string s;
    cin >> s;
    int index = -1, mini_val;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && index == -1)
        {
            continue;
        }
        if (s[i] == '0' && index == -1)
        {
            mini_val = a[i];
            index = i;
            continue;
        }
        if (s[i] == '0')
        {
            mini_val = a[i];
            index = i;
        }
        if (s[i] == '1' && a[i] < mini_val)
        {
            swap(s[i], s[index]);
            index = i;
            mini_val = a[i];
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans += a[i];
        }
    }
    cout << ans << endl;
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