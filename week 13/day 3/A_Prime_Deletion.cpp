#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{ 
    string s;
    cin>>s;
    for(int i =0;i<8;i++)
    {
        for(int j =i+1;j<9;j++)
        {int f =0;
            int value = int(s[i]-'0')*10 + int(s[j]-'0');
            for(int k = 2;k*k<= value;k++)
            {
                if(value%k ==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout<<value<<nl;
                return;
            }
        }
    }
cout<<-1<<nl;

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