#include <bits/stdc++.h>
#define ll long long
#define mx 200007
#define endl '\n'
#define mod 998244353
#define inf 10000000000000LL
#define pii pair<ll,ll>
#define ld long double
#define ff first
#define ss second
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int tc;
    cin>>tc;
 
    while(tc--)
    {
    	int n;
    	cin>>n;
 
    	if(n==1)
    	{
    		cout<<"1\n";
    		continue;
    	}
 
    	if(n&1)
    	{
    		cout<<"-1\n";
    		continue;
    	}
 
    	for(int i=n,j=1;i>0;i-= 2,j+= 2)
    		cout<<i<<" "<<j<<" ";
 
    	cout<<endl;
 
    }
}