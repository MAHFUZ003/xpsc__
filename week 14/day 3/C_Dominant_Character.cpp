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
#define rep(i, a) for (ll i = 0; i < a; i++)
void solve()
{
    int n;
    string S;
    cin >> n >> S;
    int ans = -1;
    rep(i, n - 6)
    {
        if (S.substr(i, 7) == "abbacca" || S.substr(i, 7) == "accabba")
            ans = 7;
    }
    rep(i, n - 3)
    {
        if (S.substr(i, 4) == "abca" || S.substr(i, 4) == "acba")
            ans = 4;
    }
    rep(i, n - 2)
    {
        if (S.substr(i, 3) == "aba" || S.substr(i, 3) == "aca")
            ans = 3;
    }
    rep(i, n - 1)
    {
        if (S.substr(i, 2) == "aa")
            ans = 2;
    }
    cout << ans << "\n";
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