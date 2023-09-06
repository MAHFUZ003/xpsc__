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
int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;

    ll cnt1 = 1, cnt2 = 1;
    for (ll i = 1; i * i <= n; i++)
    {
        if ((n % i == 0) && ((i * (n / i)) / (__gcd(i, n / i)) == n) && i != (n / i))
        {
            cnt1 = i;
            cnt2 = n / i;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}