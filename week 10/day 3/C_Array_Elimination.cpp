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
    int arr[n], sol[32];
    memset(sol, 0, sizeof(sol));
    int j;
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        j = 0;
        if (arr[i])
        {
            flag = 0;
        }
        while (arr[i] > 0)
        {
            if (arr[i] % 2 == 1)
            {
                sol[j]++;
            }
            j++;
            arr[i] = arr[i] / 2;
        }
    }
    if (flag)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
        return;
    }
    int gc = 0;
    for (int i = 0; i < 32; i++)
    {
        gc = __gcd(gc, sol[i]);
    }

    vector<ll> ans;
    for (int i = 2; i * i <= gc; i++)
    {
        if (gc % i == 0)
        {
            ans.push_back(gc / i);
            if ((i*i)!= gc)
            {
                ans.push_back(i);
            }
        }
    }
    if (gc == 1)
    {
        cout << 1 << endl;
        return;
    }
    ans.push_back(gc);
    ans.push_back(1);
    sort(ans.begin(), ans.end());
    for (auto x : ans)
    {
        cout << x << " ";
    }
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