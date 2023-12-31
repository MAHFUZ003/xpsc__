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
vector<ll> primes;
bool sieve(ll n)
{
    bool flag = 1;
    for (int i = 3; i * i <= n; i = i + 2)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    int cnt = 0;
    if (n % 2 == 0 && n > 2)
    {
        cout << 2 << endl;
    }
    else if (sieve(n))
    {
        cout << 1 << endl;
    }
    else if (sieve(n - 2))
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }

    return 0;
}