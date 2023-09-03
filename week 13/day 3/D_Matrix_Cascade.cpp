#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{

    int arr[11][11];
    memset(arr, 0, sizeof(arr));
    int x =5,y=5;
    for(int i =1;i<=10;i++)
    {
        for(int j =1;j<=10;j++)
        {
            if(i-x>=abs(y-j))
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<nl;
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