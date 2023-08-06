#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n, q;
    cin >> n >> q;
    ll arr[n];
    ll odd = 0, even = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        sum += arr[i];
    }
    ll x, y;
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
      //  cout<<x<<" "<<y<<nL;
        if (x == 0)
        {
            sum += (y * even);
            if(y%2==1)
            {
                odd += even;
                even =0;
            }
        }
        else
        {
            sum += (y * odd);
            if(y%2==1)
            {
                even +=odd;
               odd =0;
            }
        }
        cout << sum << nL;
        
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