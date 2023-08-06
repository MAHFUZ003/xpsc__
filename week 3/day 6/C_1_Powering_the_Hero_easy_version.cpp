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
    int arr[n];
    priority_queue<int> pq;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            if (pq.size() != 0)
            {
                ans += pq.top();
                pq.pop();
            }
        }
        else
        {
            pq.push(arr[i]);
        }
    }
    cout << ans << nL;
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