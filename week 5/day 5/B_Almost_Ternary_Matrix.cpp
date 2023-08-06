#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n,m;
    cin>>n>>m;
    string s1="",s2="";
    for(int i=1;i<=50;i++){
        if(i&1){
            s1+="00";
        }
        else{
            s1+="11";
        }
    }
    string temp1=s1.substr(3,m);
    string temp2=s1.substr(1,m);
    for(int i=0;i<n/2;i++){
        if(i&1){
            for(auto x:temp2){
                cout<<x<<" ";
            }
            cout<<endl;
            for(auto x:temp1){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else{
            for(auto x:temp1){
                cout<<x<<" ";
            }
            cout<<endl;
            for(auto x:temp2){
                cout<<x<<" ";
            }
            cout<<endl;
        }
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