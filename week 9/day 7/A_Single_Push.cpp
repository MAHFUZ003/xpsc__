#include <bits/stdc++.h>
using namespace std;

int t,n,a[1000005],b[1000005],x,z,il;

int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		x=1;
		cin>>n;
		for(int j=1;j<=n;j++) cin>>a[j];
		for(int j=1;j<=n;j++)
		{
			cin>>b[j];
			b[j]-=a[j];
		}
		for(int j=1;j<=n;j++)
		{
			if(b[j]<0)
			{
				z=1;
				break;
			}
			if(b[j]==0)
			{
				il++;
				continue;
			}
			if(x==1)
			{
				il=0;
				x--;
				continue;
			}
			if(b[j]==b[j-1] && x==0 && il==0)
			{
				continue;
			}
			else
			{
				z=1;
				break;
			}

		}
		if(z==1)
		{
			z=0;
			cout<<"NO"<<endl;
			continue;
		}
		else cout<<"YES"<<endl;
	}
}
