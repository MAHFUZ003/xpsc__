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
    int n;
    cin >> n;
    int drr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> drr[i];
    }
    int arr[n];
    arr[0] = drr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1] + drr[i];
        
        if (arr[i] - 2*drr[i] >= 0 && drr[i]!=0)
        {
         //   cout<<arr[i]<<" "<<2*drr[i]<<endl;
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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