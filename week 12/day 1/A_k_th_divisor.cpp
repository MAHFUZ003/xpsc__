#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{ ll n,k;
cin>>n>>k;
vector<ll>div;
for(ll i = 1;i*i<=n;i++)
{
    if(n%i==0)
    {
        div.push_back(i);
        if(n/i != i)
        {
            div.push_back(n/i);
        }
    }
}
if(div.size()<k)
{
    cout<<-1<<nl;
}
else
{
    sort(div.begin(),div.end());
    cout<<div[k-1]<<nl;
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