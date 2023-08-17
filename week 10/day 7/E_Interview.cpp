#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n + 1];
    ll hash[n + 1];
    memset(hash, 0, sizeof(hash));
    hash[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        hash[i] = arr[i] + hash[i - 1];
    }
    int lo = 1, high = n;
    ll ans = 1;
    for (int i = 1; i <= 30; i++)
    {
        ll mid = (high + lo) / 2;
        cout << "? " << mid << " ";
        for (int j = 1; j <= mid; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        cout<<endl;
        cout << flush;
        ll s;
        cin >> s;
        if (s > hash[mid])
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            lo = mid + 1;
        }
        if(lo>high)
        {
            break;
        }
    }
    cout<<"! "<<ans<<endl<<endl;
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