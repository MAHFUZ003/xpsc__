#include<bits/stdc++.h>
using  namespace  std;


#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;


int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int ar[n+3];
       for(int i=1;i<=n;i++)cin>>ar[i];
       int ans = 1;
       int val = ar[1];
       int cnt = 1;
       for(int i=2;i<=n;i++)
       {
           if(ar[i]>val)
           {
               if(cnt==val){
                  // cout<<i<<" "<<val<<" "<<cnt<<" "<<ans<<endl;
                  ans++;
               }
               val = ar[i];
           }

           cnt++;
       }
       cout<<ans<<endl;
    }
}