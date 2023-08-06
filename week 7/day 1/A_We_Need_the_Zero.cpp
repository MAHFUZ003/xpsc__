#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
      int n;
      cin>>n;
      int arr[n];
      for(int i =0;i<n;i++)
      {
          cin>>arr[i];
      }
      for(int  j =0;j<=255;j++)
      {
          int temp =0;
          for(int i =0;i<n;i++)
          {
              temp ^= (arr[i]^j);
              
          }
          if( temp ==0)
          {
              cout<< j<<nl;
              return;
          }
      }
      cout<<-1<<nl;
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