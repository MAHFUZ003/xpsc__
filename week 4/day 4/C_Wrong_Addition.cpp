#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

ll solve()
{
    ll a, s;
    cin >> a >> s;
    ll b = 0;
    int aa;
    int point = 1;
    ll cntt = 0;
    while (a > 0)
    {
        if (s <= 0)
        {
            return -1;
        }
        aa = a % 10;
        a = a / 10;
        int sum = s % 10;
        s = s / 10;
        if (sum < aa && s > 0)
        {
            sum = sum + (s % 10) * 10;
            s = s / 10;
        }
        if (aa > sum)
        {
            return -1;
        }
        int rest = sum - aa;

        if (rest > 9)
        {
            return -1;
        }
        b = b + rest * point;
        point = point * 10;
        // cout << a << " " << s << endl;
        // cout << aa << " " << sum << " " << b << endl
        //      << endl;
        cntt++;
        if (s == 0 || a == 0)
        {
            break;
        }
    }

    if (s == 0 && a != 0)
    {
        return -1;
    }
    int cnt = 1;
    ll bb = b;
    while (cntt--)
    {
        cnt = cnt * 10;
        //b = b / 10;
    }
    ll final_ans = (s * cnt) + bb;
    return final_ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        cout << solve() << endl;
    }
    return 0;
}