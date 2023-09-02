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
    // unordered_map<ll, ll> m;
    int arr[n];
    ll x;
    ll total = 0;

    ll maxi = 0;
   // int flag =0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
        total += x;
    
        if (x > maxi)
        {
            maxi = x;
        }
    }if(total ==0)
{
    cout<<0<<endl;
    return;
}

    total = total - maxi;

    if (total >= maxi - 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << maxi - total << endl;
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