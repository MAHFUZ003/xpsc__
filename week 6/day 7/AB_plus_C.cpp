#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long x;
        cin>>x;
        
        long long lim = 1e6;
        
        if(x == 1)cout<<"-1\n";
        else{
            if(x<=lim)cout<<1<<" "<<1<<" "<<(x-1)<<"\n";
            else{
                long long a = lim;
                long long b = (x/a);
                long long c = (x%a);
                
                if(c == 0ll)cout<<a<<" "<<(b-1)<<" "<<lim<<"\n";
                else cout<<a<<" "<<b<<" "<<c<<"\n";
            }
        }
    }
}