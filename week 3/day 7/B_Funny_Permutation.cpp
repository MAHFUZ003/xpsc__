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
    int arr[n + 1];
    if (n == 3)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    reverse(arr + 1, arr + n + 1);
    if(n%2){
        if (n == 5)
        {
            swap(arr[(n + 1) / 2], arr[((n + 1) / 2) + 2]);
        }
        else
        {
            swap(arr[(n + 1) / 2], arr[((n + 1) / 2) + 1]);

        }
    }
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";

    cout << endl;
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