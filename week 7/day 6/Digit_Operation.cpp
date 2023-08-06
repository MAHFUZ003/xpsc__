#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll nod(ll n)
{
    ll dig = 0;
    while (n)
    {
        dig++;
        n /= 10;
    }
    return dig;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n;
        cin >> k;

        vector<ll> a(n);
        vector<ll> b(n);
        map<ll, ll> ma;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ll temp = a[i];
            while (temp)
            {
                ma[temp % 10]++;
                temp /= 10;
            }
            // ma[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            ll temp = b[i];
            while (temp)
            {
                ma[temp % 10]--;
                temp /= 10;
            }
        }

        bool sol = true;
        for (int i = 0; i < n; i++)
        {
            // cout<<nod(a[i])<<" "<<nod(b[i])<<endl;;
            if (nod(a[i]) != nod(b[i]))
            {
                sol = false;
                break;
            }
        }

        if (!sol)
        {
            cout << "NO\n";
            continue;
        }
        ll ch = 0;
        for (auto &it : ma)
        {
            if (it.second < 0)
            {
                ch += abs(it.second);
            }
        }
        // cout<<ch<<endl;
        if (ch <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}