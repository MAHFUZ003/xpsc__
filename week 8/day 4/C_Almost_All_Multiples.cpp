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
    int n, x;
    cin >> n >> x;
    int ans[n + 1];
    if (n % x == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {

                ans[i] = x;
            }
            else if (i == x && i != n)
            {
                ans[i] = n;
            }
            else if (i == n)
            {
                ans[i] = 1;
            }
            else
            {
                ans[i] = i;
            }
        }
        int first = x;

        for(int i =x+1;i<n;i++)
        {
            if(n%i==0 && i%first==0)
            {
                ans[first] = i;
                ans[i]=n;
                first = i;
            }
        }

        for (int j = 1; j <= n; j++)
        {
            cout << ans[j] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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