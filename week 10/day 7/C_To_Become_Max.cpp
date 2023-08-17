#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF (ll)1e16


int main(){
   Faster;
   int t;                  cin>>t;
   while(t--){
      int n;               cin>>n;
      ll k;                cin>>k;
      vector<ll> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      ll mx=*max_element(a.begin(),a.end());

      auto Possible=[&](ll mid)->bool{
         if(mx>=mid)return true;

         for(int i=0;i<n-1;i++){

            vector<ll> b=a;
            ll temp=mid;
            
            int indx=i;
            ll target=mid;
            ll rem=k;
            while(true){
               if(indx==n or rem<0)break;
               if(b[indx]>=target){
                  return true;
               }
               rem-=(target-b[indx]);
               indx++;
               target--;

            }
         }


         return false;
      };

      ll ans=-1;
      ll low=0,high=INF;
      while(low<=high){
         ll mid=low+(high-low)/2LL;
         if(Possible(mid)){
            ans=mid;
            low=mid+1LL;
         }
         else{
            high=mid-1LL;
         }
      }

      cout<<ans<<endl;
   }
   return 0;
}