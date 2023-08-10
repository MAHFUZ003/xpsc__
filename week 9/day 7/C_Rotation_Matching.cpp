#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> m, mm;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]] = i;
    }
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
        mm[(m[brr[i]] - i+n)%n]++;
    }
    int ans = 0;
    for (auto x : mm)
    {
        ans = max(ans, x.second);
    }
    cout << ans << nl;
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