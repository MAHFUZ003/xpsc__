#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
vector<ll> v;
int n;
int f = 0;
void rec(ll result, int index)
{//cout<<result<<" "<<index<<nl;
    if (f)
    {
        return;
    }
    if (index == n)
    {
        if ((result % 360) == 0)
        {
            cout << "YES" << nl;
            f = 1;
        }
        return;
    }

    rec(result - v[index], index+1);

    rec(result + v[index], index+1);
}
void solve()
{

    cin >> n;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    rec(0, 0);
    if (f == 0)
    {
        cout << "NO" << nl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

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