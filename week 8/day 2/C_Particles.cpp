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
    ll odd_sum = 0, even_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i % 2)
        {
            odd_sum += max(0, arr[i]);
        }
        else
        {
            even_sum += max(0, arr[i]);
        }
    }
ll ans =  max(odd_sum, even_sum);
if(ans==0)
{
    sort(arr,arr+n);
    ans=arr[n-1];
}
    cout <<ans << nl;
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