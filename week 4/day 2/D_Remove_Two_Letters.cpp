#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{ 
int n;
cin>>n;
string s;
cin>>s;
int cnt =2;
for(int i =2;i<n;i++)
{
    if( s[i]==s[i-2] )
    {
        continue;
    }
    else
    {
        cnt++;
    }

}
cout<<cnt-1<<nL;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}