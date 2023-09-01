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
const int ss = 1e6 + 1;
void solve()
{
    ll ans = 0;
    int n;
    string s;
    cin >> n;
    bool hashh[n + 1];
    memset(hashh, 0, sizeof(hashh));
    cin >> s;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i - 1] == '0')
        {
            for (int j = 1; j * i <= s.length(); j++)
            {

                if (s[(j * i) - 1] == '0')
                {
                    if (hashh[(i * j) - 1] == 0)
                    {
                      //  break;
                    
                    ans += (i);
                    hashh[i * j - 1] = 1;
                  }  // cout<<i<<" "<<i*j<<" "<<ans<<endl;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout << ans << endl;
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