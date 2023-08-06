#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define sz(x) (int((x).size()))
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0;

    int inf = 1e7;
    ordered_set<pair<ll, ll>> st;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += (st.order_of_key({arr[i], inf}));
        st.insert({arr[i], i});
    }
    cout << ans << endl;
}
int main()
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