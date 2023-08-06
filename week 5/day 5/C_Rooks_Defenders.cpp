#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
void solve()
{
      int n,q;
    cin>>n>>q;
    map<int,int>r,c;
    ordered_set row,col;
 
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int l1,r1;
            cin>>l1>>r1;
            row.insert(l1);
            col.insert(r1);
 
            r[l1]++;
            c[r1]++;
        }
        else if(t==2)
        {
            int l1,r1;
            cin>>l1>>r1;
            r[l1]--;
            c[r1]--;
            if(r[l1]==0)row.erase(l1);
            if(c[r1]==0)col.erase(r1);
        }
        else
        {
            int l1,r1,l2,r2;
            cin>>l1>>r1>>l2>>r2;
            int x = row.order_of_key(l2+1)-row.order_of_key(l1);
            int y = col.order_of_key(r2+1)-col.order_of_key(r1);
 
            if(x==((l2-l1)+1) || y==((r2-r1)+1))cout<<"Yes"<<nl;
            else cout<<"No"<<nl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
        solve();
    
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