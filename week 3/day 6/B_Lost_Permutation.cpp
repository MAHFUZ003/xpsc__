#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
void solve()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    int hash[1000];
    for (int i = 1; i <= 999; i++)
    {
        hash[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
        if (arr[i] == 0 || hash[arr[i]] == 1)
        {
            cout << "NO" << endl;
            return;
        }
        hash[arr[i]] = 1;
    }
    for (int i = 1; i <= 999; i++)
    {
        if (hash[i] == 0 && sum >= i)
        {
            hash[i] = 1;
            sum = sum - i;
        }
    }
    if (sum > 0)
    {
        cout << "NO" << endl;
        return;
    }
    sort(arr,arr+n);
    for (int i = 1; i <= arr[n - 1]; i++)
    {
        if (hash[i] == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    for (int i = 1; i <= ttt; i++)
    {
        solve();
    }
    return 0;
}