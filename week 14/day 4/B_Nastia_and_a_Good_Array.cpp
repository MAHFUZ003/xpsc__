#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
 
    ll r = 1000000007;
    for (int tt = 0; tt < t; tt++)
    {
        ll n;
        cin>>n;
 
        ll a[n];
 
        ll mi=INT_MAX;
        ll pos=-1;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<mi)
            {
                mi=a[i];
                pos = i;
            }
        }
 
        ll start=-1;
        int ops=0;
 
        if(pos%2==0)
        {
            start=1;
            ops=(n)/2;
        }
        else
        {
            start=0;
            ops=(n+1)/2;
        }
 
        cout<<ops<<"\n";
        for (int i = 0; i < ops; i++)
        {
            //ijxy
            cout<<pos+1<<" "<<start+1<<" "<<a[pos]<<" "<<r<<"\n";
            start+=2;
        }
        
        cout<<"\n";
        
        
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}