#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define int long long
const int mod = 1000*1000*1000 + 7;
const int inf = 1e18;
using ii = pair<int,int>;
#define endl '\n'
int be(int a,int b,int p)
{
  int ans = 1;
  while(b)
  {
    if(b&1)
    {
      ans = (ans*a)%p;
    }
    a = (a*a)%p;
    b = b>>1;
  }
  return ans;
}

void solve()
{
    int x;
  cin>>x;
  int temp;
  vector<int> ans;
  ans.push_back(x);
  if(x%2)
  {
    x--;
    ans.push_back(x);
  }
  while(x!=2)
  {
    temp = 1;
    while(x%(2*temp) == 0) temp*=2;
    if(temp == x) temp/=2;
    x-=temp;
    ans.push_back(x);
  }
  ans.push_back(1);
  cout<<ans.size()<<endl;
  for(auto v: ans) cout<<v<<" ";
  cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}