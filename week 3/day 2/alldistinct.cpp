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

#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
const int z = 15000;
int arr[z];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        int n;
        cin >> n;
        memset(arr, -1, sizeof(arr));
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr[x]++;
        }
        ll ans = 0;
        for (int i = 0; i < 15000; i++)
        {
            if (arr[i] >= 0)
            {
                ans += arr[i];
            }
        }
        cout << n - 2 * ((ans + 1) / 2) << endl;
    }
    return 0;
}