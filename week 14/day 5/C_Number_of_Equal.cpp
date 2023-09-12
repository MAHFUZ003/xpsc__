#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{ 
int a,b;
cin>>a>>b;
ll arr[a];
map<ll,ll>m;
for(int i =0;i<a;i++)
{
    cin>>arr[i];
    m[arr[i]]++;
}
ll x;
ll ans =0;
for(int i =0;i<b;i++)
{
    cin>>x;
    ans += m[x];
}
cout<<ans<<nl;

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