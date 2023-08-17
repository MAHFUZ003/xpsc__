#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
 
void solve(){ 
    int n;cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        mp[temp]++;
    }
   
    //store all the count in vector
    vector<int> arr;
    for(auto p:mp)
    arr.push_back(p.second);
    
    // sort the count array
    sort(arr.begin(),arr.end());
 
    int ans=INT_MAX;
    int size=mp.size();
 
    for(int i=0;i<size;i++)
    {
        int greater_equal_element_count= size-i;
        ans=min(ans,n-(arr[i]*greater_equal_element_count));
    }
    cout<<ans<<"\n";
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