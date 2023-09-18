#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll current = 0;
    int left = 0, right = 0;
    int ans = 0;
    while (left < n && right < n)
    {
        while (right < n && current < k)
        {
            current += arr[right];
            right++;
        }
        if (current == k)
        {
          //  cout<<left<<" accepted "<<right<<nl;
            ans++;
            current -= arr[left];
            left++;
            
        }
        while (left < n && current > k)
        {
            current -= arr[left];
            left++;
        }
         if (current == k)
        {
            //cout<<left<<" accepted "<<right<<nl;
            ans++;
            current -= arr[left];
            left++;
            
        }
            
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