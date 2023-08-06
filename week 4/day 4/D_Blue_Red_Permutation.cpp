#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll tt;
  cin >> tt;
  while(tt--)
  {
            ll n;
            cin >> n;
            ll a[n];
            for(ll i = 0; i < n; i++){
              cin >> a[i];
            }
            string s;
            cin >> s;
            vector<ll> blue, red;
            for(ll i = 0; i < n; i++)
            {
              if(s[i] == 'B')
                blue.push_back(a[i]);
              
              else
                red.push_back(a[i]);
              
            }
            sort(blue.begin(), blue.end());
            sort(red.begin(), red.end(), greater<ll>());
            bool ok = true;
            for(ll i = 0; i < blue.size(); i++)
            {
              if(blue[i] < i + 1)
                ok = false;
              
            }
            for(ll i = 0; i < red.size(); i++){
              if(red[i] > n - i)
                ok = false;
              
            }
            cout << (ok ? "YES\n" : "NO\n");
  }
}