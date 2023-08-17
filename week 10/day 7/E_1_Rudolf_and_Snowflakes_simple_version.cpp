#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
int n;
bool if_possible(int i)
{
    ll final = 1 + i + i * i;
    ll temp = i * i;
    while (final < n)
    {
        temp *= i;
        final += temp;
    }
    if (final == n)
    {
        return 1;
    }
    return 0;
}
void solve()
{

    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (if_possible(i))
        {
            cout << "YES" << nl;
            return;
        }
    }
    cout << "NO" << nl;
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