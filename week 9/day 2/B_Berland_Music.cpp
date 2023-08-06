#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
 
ll power(ll a, ll b){ // a raised to power b
  ll res=1;
  while(b){
    if(b&1) res=(res*a)%mod;
    b>>=1;
    a=(a*a)%mod;
  }
  return res;
}
 
bool isprime(ll n){
  for(ll i=2;i*i<=n;i++){
   if(n%i==0) return 0;
  }
  return 1;
}
 
void solve()
{
    //TC O(nlogn)
   ll n;cin>>n;
   vector<ll> p(n);
   for(int i=0;i<n;i++) cin>>p[i];
   string s;cin>>s;
   vector<vector<ll>> v(n); //{rating,likestatus,index}
   ll dislikes=0,likes=0;
   for(int i=0;i<n;i++){
       if(s[i]=='0') {
           dislikes++; v[i]={p[i],0,i};
       }
       else {
           likes++; v[i]={p[i],1,i};
       }
   }
   sort(v.begin(),v.end());
   vector<ll> q(n);
   ll l=dislikes+1, dl=1;
   for(int i=0;i<n;i++){
       ll idx=v[i][2],status=v[i][1];
      if(status==0){
          q[idx]=dl++;
      } 
      else q[idx]=l++;
   }
   for(auto x:q) cout<<x<<" ";
   cout<<endl;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}