#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
int n;
const int N = 200008;
ll a[N + 1];
int has[N + 1];
ll lost_from_first()
{
    ll extra = a[1];
    for (int i = 0; i <= n; i++)
    {
        has[i] = 0;
    }
    ll gap;
    for (int i = 2; i < n; i++)
    {
        gap = a[i] - a[i - 1];
        if (gap <= n && gap >= 1)
        {
            has[gap]++;
            if (has[gap] >= 2)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (has[i] == 0)
        {
            extra -= i;
            cnt++;
        }
    }
    if (cnt == 2 && extra == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

ll lost_form_last()
{
    ll p = n;
    ll extra = ((p * (p + 1)) / 2) - a[n - 1];
    for (int i = 0; i <= n; i++)
    {
        has[i] = 0;
    }
    ll gap;
    a[0] = 0;
    for (int i = 1; i < n; i++)
    {
        gap = a[i] - a[i - 1];
        if (gap <= n && gap >= 1)
        {
            has[gap]++;
            if (has[gap] >= 2)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (has[i] == 0)
        {
            extra -= i;
            cnt++;
            break;
        }
    }
    if (cnt == 1 && extra == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

ll lost_form_mid()
{

    ll extra = -1;

    for (int i = 0; i <= n; i++)
    {
        has[i] = 0;
    }
    ll gap;
    a[0] = 0;
    for (int i = 1; i < n; i++)
    {
        gap = a[i] - a[i - 1];
        if (gap > n && extra == -1)
        {
            extra = gap;
        }
        else if (gap <= n && gap >= 1)
        {
            has[gap]++;
            if (has[gap] == 2 && extra == -1)
            {
                extra = gap;
            }
            else if (has[gap] == 2 && extra != -1)
            {
              //  cout << "1" << nl;
                return 0;
            }
        }
        else
        {
           // cout << "2" << nl;
            return 0;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (has[i] == 0)
        {
            extra -= i;
            cnt++;
           
        }
    }
    if (cnt == 2 && extra == 0)
    {
        return 1;
    }
    else
    {
       // cout << "3" << nl;
        return 0;
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i < n)
        {
            cin >> a[i];
        }
    }
    if (lost_from_first())
    {
        cout << "YES" << nl;
    }
    else if (lost_form_last())
    {
        cout << "YES" << nl;
    }
    else if (lost_form_mid())
    {

        cout << "YES" << nl;
    }
    else

    {
        cout << "NO" << nl;
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
// check constraints
// at first try a brute force way to solve
// then optimization

//  if its array:
//  1. try greedy
//  2. if it is a result of subproblems try dp
//  3. if it is showing for  a range minimum or maximum
//    3.1 tttttffffff
//    else
//    3.2 ffffftttttt
//    try binary search