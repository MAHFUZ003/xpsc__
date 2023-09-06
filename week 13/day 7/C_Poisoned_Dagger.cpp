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
int n;
ll h;
int arr[101];
bool calculate(ll mid)
{
    ll total =0;
    for(int i =0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]<mid)
        {
            total += (arr[i+1]-arr[i]);
        }
        else
        {
            total += mid;
        }

    }
    total += mid;


    return total >=h;
}
void solve()
{
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll lo = 1, hi = 1e18 + 5;
    ll mid;
    ll ans;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (calculate(mid))
        {
            ans = mid;
            hi = mid - 1;
            //  hi--;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout <<ans<<endl;
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