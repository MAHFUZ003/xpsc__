#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    vector<ll> even, odd;
    for (int i = 0; i < n; i++)
    {
     cin>>   arr[i];
        if (arr[i] % 2 == 1)
        {
            odd.push_back(arr[i]);
        }
        else
        {
            even.push_back(arr[i]);
        }
    }
    even.push_back(0);
    odd.push_back(0);
    int e = even.size()-1, o = odd.size()-1;
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    ll alice = 0, bob = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (e > 0 && even[e] >= odd[o])
            {
                alice += even[e];
                e--;
            }
            else
            {
                o--;
            }
        }
        else
        {
            if (o > 0 && even[e] <= odd[o])
            {
                bob += odd[o];
                o--;
            }
            else
            {
                e--;
            }
        }
    }
   // cout << alice << " " << bob << nL;
    if (alice > bob)
    {
        cout << "Alice" << nL;
    }
    else if (bob > alice)
    {
        cout << "Bob" << nL;
    }
    else

    {
        cout << "Tie" << nL;
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