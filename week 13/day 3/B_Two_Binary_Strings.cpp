#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    string a, b;
    cin >> a >> b;
    int ok = 0;
    int first = 0;
    int n = a.length();
    if ((a == b)||(a[1]==b[1] && a[1]=='1')||(a[n-2]==b[n-2] && a[n-2]=='0') )
    {
        cout << "YES" << nl;
        return;
    }
   int secon=0;
    for (int i = 1; i < a.length() - 1; i++)
    {
        if ((a[i] == b[i]) && a[i] =='0')
        {
            first=1;

        }
        if( a[i]!=b[i])
        {
            first =0;
        }
        if(a[i]==b[i] && a[i]=='1' && first==1)
        {
            secon=1;
            break;
        }
    }
    if(first ==1 && secon ==1)
    {
        cout<<"YES"<<nl;

    }
    else
    {
        cout<<"NO"<<nl;
    }
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
// check constraints
// at first try a brute force way to solve
// then optimization

//  if its array:
//  1. try greedy
//  2. if it is a result of subproblems try dp
//  3. if it is showing for  a range minimum or maximum
//    3.1 tttttffffff
//    else
//    3.2 ffffftttttt
//    try binary search