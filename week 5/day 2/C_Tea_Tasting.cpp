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
    ll arr[n + 1], brr[n + 1];
    ll ans[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        ans[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> brr[i];
        ans[i] = 0;
    }
    priority_queue<ll, vector<ll>, greater<>> pq;
    ll till_now = 0;
    for (int i = 1; i <= n; i++)
    {
        while (pq.size() != 0 && pq.top() < (till_now + brr[i]))
        {
            if (pq.top() - (till_now) > 0)
            {
                ans[i] += (pq.top() - (till_now));
            }
            pq.pop();
        }
        ans[i] += pq.size() * brr[i];
        if (brr[i] >= arr[i])
        {
            ans[i] += arr[i];
            arr[i] = 0;
        }
        else
        {
            ans[i] += brr[i];
            arr[i] = arr[i] - brr[i];
        }
        till_now += brr[i];
        pq.push(till_now + arr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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