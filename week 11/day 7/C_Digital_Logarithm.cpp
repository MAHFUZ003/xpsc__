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
   ll arr[n], brr[n];
  map<ll, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    ll cost = 0;
    vector<int> b, a;

    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
        if (m[brr[i]] > 0)
        {
            m[brr[i]]--;
        }
        else
        {
            b.push_back(brr[i]);
        }
    }
    for (auto x : m)
    {
        for (int i = 0; i < x.second; i++)
        {
            a.push_back(x.first);
        }
    }
    unordered_map<int, int> mm;
    int len = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 10)
        {
            mm[a[i]]++;
        }
        else
        {
            len = 0;
            while (a[i])
            {
                len++;
                a[i] = a[i] / 10;
            }
            cost++;
            mm[len]++;
        }
    }
    vector<int> bb;
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] < 10)
        {
            bb.push_back(b[i]);
        }
        else
        {
            len = 0;
            while (b[i] > 0)
            {
                len++;
                b[i] = b[i] / 10;
            }
            cost++;
            bb.push_back(len);
        }
    }
    vector<int> bbb;
    for (int i = 0; i < bb.size(); i++)
    {
        if (mm[bb[i]] > 0)
        {
            mm[bb[i]]--;
        }
        else
        {
            bbb.push_back(bb[i]);
        }
    }
    unordered_map<int, int> ma, mb;
    for (auto x : mm)
    {
        if (x.first > 1)
        {
            cost += x.second;
        }
    }
    for (auto x : bbb)
    {
        if (x > 1)
        {
            cost++;
        }
    }
    cout << cost << endl;
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
