#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{

    int n;
    cin >> n;
    int ar[n + 4];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    vector<int> v;
    if (n % 2 == 1)
    {
        cout << "NO" << endl;
       return;
    }
    for (int i = 0, j = n / 2; i < n / 2; i++, j++)
    {
        v.push_back(ar[i]);
        v.push_back(ar[j]);
    }
    v.push_back(v[0]);
    v.push_back(v[1]);
    int ans = 0;
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
            continue;
        else if (v[i] < v[i - 1] && v[i] < v[i + 1])
            continue;
        else
        {
            ans = 1;
            break;
        }
    }
    if (ans == 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
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