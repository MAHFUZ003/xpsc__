#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    vector<ll> smaller, bigger;
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            smaller.push_back(arr[i]);
            // cout<<"smaller "<<arr[i]<<nl;
        }
        else
        {
            bigger.push_back(arr[i]);

            //  cout<<"bigger "<<arr[i]<<nl;
        }
    }
    ll ans[n];
    int ans_pointer = n - 1, smaller_pointer = smaller.size() - 1, bigger_pointer = bigger.size() - 1;
    ans[ans_pointer] = bigger[bigger_pointer];
    ans_pointer--, bigger_pointer--;
    vector<ll> extra;
    int cnt = 0;
    while (smaller_pointer >= 0 && bigger_pointer>=0)
    {
        if (smaller[smaller_pointer] < bigger[bigger_pointer])
        {
            ans[ans_pointer] = smaller[smaller_pointer];
            ans_pointer--;
            ans[ans_pointer] = bigger[bigger_pointer];
            bigger_pointer--;
            ans_pointer--;
            smaller_pointer--;
            cnt++;
        }
        else
        {
            extra.push_back(smaller[smaller_pointer]);
            smaller_pointer--;
        }
    }
    while (bigger_pointer >= 0)
    {
        /* code */
        ans[ans_pointer] = bigger[bigger_pointer];
        ans_pointer--, bigger_pointer--;
    }while(smaller_pointer>=0)
    {
        extra.push_back(smaller[smaller_pointer]);
            smaller_pointer--;
    }
    while (extra.size())
    {
        ans[ans_pointer] = extra[extra.size() - 1];
        ans_pointer--;
        extra.pop_back();
    }
    cout << cnt << nl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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