#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e5+10;
long long q,w,ar[maxn],arr[maxn],arra[maxn],l[maxn],r[maxn],d[maxn],x[maxn],y[maxn];
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>ar[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>l[i]>>r[i]>>d[i];
	}
	for(int i=1;i<=k;i++)
	{
		cin>>q>>w;
		arr[q]++;
		arr[w+1]--;
	}
	for(int i=1;i<=m;i++)
	{
		arr[i]=arr[i]+arr[i-1];
	}
	for(int i=1;i<=m;i++)
	{
		arra[l[i]]+=d[i]*arr[i];
		arra[r[i]+1]-=d[i]*arr[i];
	}
	for(int i=1;i<=n;i++)
	{
		arra[i]=arra[i]+arra[i-1];
		cout<<ar[i]+arra[i]<<" ";
	}
	
}
