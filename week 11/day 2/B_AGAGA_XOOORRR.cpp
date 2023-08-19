#include<bits/stdc++.h>
using  namespace  std;

#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;


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
        int pre[n+3];
        pre[0]=0;
        for(int i=1;i<=n;i++)pre[i]=pre[i-1]^ar[i];

        int ans=0;
        //p 2
        for(int i=1;i<n;i++)
        {
            int a=pre[i];
            int b=pre[n]^pre[i];
            if(a==b)
            {
                ans=1;
                break;
            }
        }

        //p - 3
        for(int i=1;i<n-1;i++)
        {
            int a=pre[i];
            for(int j=i+1;j<n;j++)
            {
                int b=pre[j]^pre[i];
                int c=pre[n]^pre[j];
                if(a==b && b==c)
                {
                    ans=1;
                    break;
                }
            }
        }

        if(ans==1)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    return 0;
}
