#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--){
        ll n,m,b,A1=0,A=0,B=0;
        cin>>n>>m;
        vector < ll > a(n);
        for(ll i = 0 ; i < n ; i++)
            cin>>a[i];
        for(ll i = 0 ; i < m ; i++) {
            cin>>b;
            B|=b;
        }
        for(ll i = 0 ; i < n ; i++) {
            A^=a[i];
            A1^=(a[i]|B);
        }
        if(n%2 == 0)
            cout<<A1<<" "<<A<<endl;
        else
            cout<<A<<" "<<A1<<endl;
    }  
    return 0;
}