#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{ 
    int n;
    cin>>n;
    ll sum =0;
    vector<ll>ans;
    for(int i = 2;i<=n;i++)
    {
        sum+= i;
        ans.push_back(i);
    }
    int cnt = sum /n;
    cnt ++;
    
ans.push_back((cnt*n)-sum);
cout<<ans[n-1]<<" ";
for(int i =0;i<n-1;i++)
{
    cout<<ans[i]<<" ";
}
cout<<nL;

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