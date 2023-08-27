
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ld eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

#define mp make_pair
#define pb push_back
#define endl "\n"

bool solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n), p(n + 1, -1), q(n + 1, -1);
    vector<ll> ans_p(n, 0), ans_q(n, 0);
    set<ll> set_p, set_q;

    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
        set_p.insert(i + 1);
        set_q.insert(i + 1);
    }

    for (ll i = 0; i < n; ++i)
    {
        if (p[v[i]] == -1)
        {
            p[v[i]] = i;
            ans_p[i] = v[i];
            set_p.erase(v[i]);
        }
        else if (q[v[i]] == -1)
        {
            q[v[i]] = i;
            ans_q[i] = v[i];
            set_q.erase(v[i]);
        }
        else
        {
            return false;
        }
    }

    for (ll i = 0; i < n; ++i)
    {
        if (p[v[i]] == i)
        {
            auto itr = set_q.upper_bound(v[i]);

            if (itr == set_q.begin())
                return false;

            itr = prev(itr);
            ans_q[i] = *itr;
            set_q.erase(ans_q[i]);
        }
        else if (q[v[i]] == i)
        {
            auto itr = set_p.upper_bound(v[i]);

            if (itr == set_p.begin())
                return false;

            itr = prev(itr);
            ans_p[i] = *itr;
            set_p.erase(ans_p[i]);
        }
    }

    cout << "YES" << endl;
    for (ll i = 0; i < n; ++i)
        cout << ans_p[i] << " ";
    cout << endl;

    for (ll i = 0; i < n; ++i)
        cout << ans_q[i] << " ";
    cout << endl;

    return true;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifdef EPSILON
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    ll t = 1;
    cin >> t;

    while (t--)
    {
        if (solve())
        {
            // cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}