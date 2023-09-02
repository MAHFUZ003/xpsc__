#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
vector<int> RightRotate(vector<int> a, int n, int k)
{

    // If rotation is greater
    // than size of array
    k = k % n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {

            // Printing rightmost
            // kth elements
            arr[i] = a[n + i - k];
        }
        else
        {

            // Prints array after
            // 'k' elements
            arr[i] = (a[i - k]);
        }
    }
    return arr;
}
void solve()
{
    int n, kk;
    cin >> n >> kk;
    vector<int> arr(n + 1);
    int hash[n + 1];
    memset(hash, 0, sizeof(hash));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hash[arr[i]] = 1;
    }
    int missing = 0;
    for (int i = 0; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            missing = i;
            break;
        }
    }
    arr[n] = missing;
    // rotatont

    //cout << missing << nl;
   
 
        arr = RightRotate(arr, n + 1, kk);
    
    // cout<<missing<<nl;
 
 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << nl;
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