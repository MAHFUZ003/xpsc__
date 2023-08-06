#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    vector<ll> left, right;
    int q;
    cin >> q;
    ll id;
    char c;
    map<int, int> lmap, rmap;
    for (int i = 0; i < q; i++)
    {
        cin >> c >> id;
        if (c == 'L')
        {
            left.push_back(id);
            lmap[id] = left.size();
        }
        else if (c == 'R')
        {
            right.push_back(id);
            rmap[id] = right.size();
        }
        else
        {
            if(rmap[id]>0)
            {
                cout<<min(left.size()+rmap[id]-1,right.size()-rmap[id])<<nl;
            }
            if(lmap[id]>0)
            {
                 cout<<min(right.size()+lmap[id]-1,left.size()-lmap[id])<<nl;
            }
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