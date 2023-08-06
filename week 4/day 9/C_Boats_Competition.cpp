#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 0;
    for (int sum = 2; sum <= 100; sum++)
    {
        int cnt = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            while ((i < j) && arr[i] + arr[j] < sum)
            {
                i++;
            }
            while ((i < j) && (arr[i] + arr[j]) > sum)
            {
                j--;
            }
            if ((arr[i] + arr[j]) == sum && (i < j))
            {
                cnt++;
                i++;
                j--;
                //  cout << sum << " " << cnt << " " << i << " " << j <<" "<<arr[i]<<" "<<arr[j]<< nL;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << nL;
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