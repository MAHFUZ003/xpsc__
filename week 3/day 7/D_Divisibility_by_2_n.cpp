#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

int getCount(int x)
{
    int total = 0;
    while (x % 2 == 0)
    {
        x /= 2;
        total++;
    }
    return total;
}

void solve()
{
    int n;
    cin >> n;
    long long x = 0, extra = 0;
    vector<int> a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x += getCount(a[i]);
        int cnt = getCount(i + 1);
        extra += cnt;
        b.push_back(cnt);
    }
    if (x >= n)
    {
        cout << 0 << "\n";
        return;
    }
    if (x + extra < n)
    {
        cout << -1 << "\n";
        return;
    }
    int ans = 0;
    sort(b.rbegin(), b.rend());
    for (auto i : b)
    {
        ans++;
        if (x + i >= n)
            break;
        x += i;
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}