#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    ll n;
    cin >> n;
    ll x, y;
    cin >> x >> y;
    ll nx, ny;
    nx = n/x;
    ny = n/y;
    nx = nx - (n / ((x*y)/__gcd(x, y)));
   //cout<<x<<" "<<n<<" "<<__gcd(x,y)<<nl;
//cout<<nx<<nl;

    ny = ny - (n / ((x*y)/__gcd(x, y)));
    //cout<<nx<<nl;
   // cout<<ny<<nl;
    nx = n- nx;
   //nx--;
    ll total =(n * (n + 1)) / 2;
    ll t_x = (nx * (nx + 1)) / 2;
    ll ty =( ny * (ny + 1) )/ 2;
  //  cout<<nx<<" "<<ny<<nl;
   // cout<<total<<" "<<t_x<<" "<<ty<<nl;
    cout <<  (total- (t_x)) - (ty) << nl;
    
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