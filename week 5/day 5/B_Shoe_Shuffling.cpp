#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    vector<ll> ans;
    int i = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n && v[i] == v[j])
            j++;

        int tmp = j - i;
        if (tmp == 1)
        {
            ans.clear();
            break;
        }

        ans.push_back(j);
        for (int a = i + 1; a < j; a++)
            ans.push_back(a);

        i = j;
    }

    if (ans.size())
        for (auto &i : ans)
            cout << i << " ";
    else
        cout << -1;

    cout << endl;
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