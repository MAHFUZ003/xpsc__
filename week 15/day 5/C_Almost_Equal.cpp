#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i,j,k,p;

    cin>>x;

    if(x%2==0) { cout<< "NO\n"; return 0; }

    p=2*x;

    int n[p];

    n[0]=1; n[x]=2;

    /// L--E
    k=x+1;
    for(i=1;i<x;i=i+2)
        n[i]=k,k=k-2;

    ///L--O
    k=x+2;
    for(i=2;i<x;i=i+2)
        n[i]=k,k=k+2;

    ///R--O
    k=x;
    for(i=x+1;i<p;i=i+2)
        n[i]=k,k=k-2;

    ///R--E
    k=x+3;
    for(i=x+2;i<p;i=i+2)
        n[i]=k,k=k+2;

    cout<< "YES\n";
    for(i=0;i<p;i++)
        cout<< n[i]<< " ";

}