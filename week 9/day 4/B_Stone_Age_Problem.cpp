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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll ttt;
    cin >> ttt;
    ll arr[n];
    ll sum = 0;
    map<ll, ll> curr_val;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
        curr_val[i] = arr[i];
    }
    ll def;
    while (ttt--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll p, x;
            cin >> p >> x;
            if (curr_val[p - 1] == 0)
            {
                curr_val[p - 1] = def;
            }
            sum = sum - curr_val[p-1];
            sum = sum +x;
            curr_val[p-1]=x;

            // cout << sum - arr[p - 1] + x << endl;
           // arr[p - 1] = x;
        }
        else
        {
            ll x;
            cin >> x;
            sum = n * x;
            def = x;
            //    cout << sum << endl;
            curr_val.clear();
        }
        cout << sum << endl;
    }
    return 0;
}