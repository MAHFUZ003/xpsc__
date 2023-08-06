#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n + 1];
    int e = 0, o = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if (n == 1)
    {
        cout << 0 << nL;
        return;
    }
    if (n % 2 == 0 && e != o)
    {
        cout << "-1" << nL;
        return;
    }
    if (n % 2 == 1 && abs(e - o) > 1)
    {
        cout << "-1" << nL;
        return;
    }
    vector<int> even, odd;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    if (n % 2 == 1)
    {
        int ans = 0;
        //   cout<<e<<o<<nL;
        if (e > o)
        {
            for (int i = 0; i < even.size(); i++)
            {
                ans += abs(i * 2 + 1 - even[i]);
                //  cout<<i<<" "<<ans<<nL;
            }
            cout << ans << nL;
        }
        else
        {
            for (int i = 0; i < odd.size(); i++)
            {
                ans += abs(i * 2 + 1 - odd[i]);
            }
            cout << ans << nL;
        }
    }
    else
    {
        int ans1 = 0;
        for (int i = 0; i < even.size(); i++)
        {
            ans1 += abs(i * 2 + 1 - even[i]);
            //  cout<<i<<" "<<ans<<nL;
        }

        int ans2 = 0;
        for (int i = 0; i < even.size(); i++)
        {
            ans2 += abs(i * 2 + 2 - even[i]);
            //  cout<<i<<" "<<ans<<nL;
        }
        cout << min(ans1, ans2) << nL;
    }
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