#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
vector<ll> arr;
vector<ll> ans;
void divide(int s, int e, int point)
{
    if (s > e)
    {
        return;
    }
    int maximum = 0;
    int maxi = 0;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] > maximum)
        {
            maxi = i;
            maximum = arr[i];
        }
    }
    //cout<<s<<" "<<e<<" "<<point<<" "<<maxi<<nL;
    ans[maxi] = point;
    divide(s, maxi - 1, point + 1);
    divide(maxi + 1, e, point + 1);
}
void solve()
{
    int n;
    cin >> n;
    ll x;
    arr.clear(),ans.clear();
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
        ans.push_back(0);
    }
    divide(0, n - 1, 0);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nL;
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