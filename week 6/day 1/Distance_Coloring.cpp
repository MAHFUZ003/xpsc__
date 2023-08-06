#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes 
	int t ;
	cin>>t;
	ll mod = 1e9 +7;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll ans=1;
	    for ( ll i = 0 ; i<min(n,k); i++)
	    {
	        
	        ans =(( ans*(k-i))%mod);
	    }
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}