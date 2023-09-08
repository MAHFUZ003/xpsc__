#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
int find__(vector<int>&a,vector<int>&b, const int k)
{
    sort(b.begin(),b.end());
    auto hasLessThanK = [&a, &b, k](int x) {
        int cnt = 0;
        for (const auto &ai : a) {
            if (ai < x) {
                cnt += (lower_bound(b.begin(), b.end(), x - ai) - b.begin());
                if (cnt >= k) {
                    return false;
                }
            }
        }
        return true;
    };
    int lo = 1, hi = 2e9 + 1;
    while (lo + 1 < hi) {
        auto mid = lo + (hi - lo) / 2;
        if (hasLessThanK(mid)) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    return lo;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout<<find__(a,b,k)<<nl;
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