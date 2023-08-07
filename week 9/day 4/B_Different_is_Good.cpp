#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a[26],n,x;
    memset(a,0,sizeof(a));
    cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    for(int i=0;i<n;i++)
    {
       x=(int)s[i];x=x-97;
       a[x]++;
    }
    long int c2=0,c1=0,c0=0;
   for(int i=0;i<26;i++)
   {
       if(a[i]>1)
        c2+=(a[i]-1);
       else if(a[i]==1)
        c1++;
       else
        c0++;
   }
   if(c2==0)
      cout<<"0"<<endl;
   else
   {
       if(c2>c0)
          cout<<"-1"<<endl;
       else
           cout<<c2<<endl;
   }

    return 0;
}
