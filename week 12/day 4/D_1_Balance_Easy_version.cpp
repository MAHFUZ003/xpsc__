#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll q;
    cin >> q;
    map<ll, ll> mex;
    for (int i = 1; i <= q; i++)
    {
        char c;
        ll value;
        cin >> c >> value;
        if (c == '+')
        {
            mex[value] = 1;
        }
        else
        {
            if(mex[value]==0)
            {
                cout<<value<<nl;
                continue;
            }
            ll id = value;
            while (mex[id] != 0)
            {
                id += value;
            }
            mex[value] = id;
            cout << id << nl;
        }
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