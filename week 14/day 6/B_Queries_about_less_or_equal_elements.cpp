#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i =0;i<m;i++)
    {
        ll x;
        cin>>x;
        ll ans = 0;
      int low=1,high = n;
      while(low<=high)
      {
        int mid = (low+high)/2;
        if(arr[mid-1]<=x)
        {
            ans = mid;
            low= mid+1;
        }
        else
        {
            high = mid-1;
        }
      }
      cout<<ans<<" ";
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