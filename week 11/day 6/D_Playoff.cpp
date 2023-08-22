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
    string s;
    cin >> n >> s;
    int ones = 0, zeros = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            ones++;
        }
        else
        {
            zeros++;
        }
    }
    int start = pow(2, ones), end = pow(2, zeros) - 1, total = pow(2, n);

    for (int i = start; i <= total - end; i++)
    {
        cout << i << " ";
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  cin >> ttt;
    //  for (int i = 1; i <= ttt; i++)
    // {
    solve();
    // }
    return 0;
}