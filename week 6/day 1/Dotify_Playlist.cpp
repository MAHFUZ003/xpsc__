#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{ 
int n,k,l;
cin>>n>>k>>l;
int li;
vector<int>m;
int mi;
for(int i =0;i<n;i++)
{
cin>>mi>>li;
if(li ==l)
{
    m.push_back(mi);
}
}
sort(m.begin(),m.end());
reverse(m.begin(),m.end());
if(m.size()<k)
{
    cout<<-1<<nl;
}
else
{
    ll sum =0;
    for(int i =0;i<k;i++)
    {
        sum+= m[i];
    }
    cout<<sum<<nl;
}

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