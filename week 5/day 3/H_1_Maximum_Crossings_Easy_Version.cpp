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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        // from left
        for (int j = 0; j < i; j++)
        {
            if (arr[j] >= arr[i])
            {
                ans++;
            }
        }
        //from right


        for (int j = i+1; j < n; j++)
        {
            if (arr[j] <= arr[i])
            {
                ans++;
            }
        }
    }
    cout<<ans/2<<endl;
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