#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{

    int n;
    cin >> n;
    vector<ll> v(n), copyv;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    copyv = v;
    sort(copyv.begin(), copyv.end());
    vector<ll> calculate;
    for (int i = 0; i < n; i++)
    {
        //cout<<v[i]<<" "<<copyv[i]<<nL;
        if (v[i] != copyv[i])
        {
           // cout<<v[i]<<nL;
            calculate.push_back(v[i]);
        }
    }
    ll gcd = copyv[0];
   // cout<<"NOW gcd"<<nL;
    for (int i = 0; i < calculate.size(); i++)
    {
        gcd = __gcd(calculate[i], gcd);
     //   cout<<calculate[i]<<" "<<gcd<<nL;
        if (gcd != copyv[0])
        {
            cout << "NO" << nL;
            return;
        }
    }
    cout << "YES" << nL;
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