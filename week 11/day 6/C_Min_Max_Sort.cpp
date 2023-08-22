#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        int arr[n];
        int mid_value = (n + 1) / 2;
        int mid_index;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mid_value == arr[i])
            {
                mid_index = i;
            }
        }
        int left_cnt = 0, right_cnt = 0;
        int j = mid_index - 1;
        // left_search
        while (j >= 0)
        {
            if (arr[j] == mid_value - left_cnt - 1)
            {
                left_cnt++;
            }
            j--;
        }
        j = mid_index + 1;
        while (j < n)
        {
            if (arr[j] == mid_value + right_cnt + 1)
            {
                right_cnt++;
            }
            j++;
        }
        int ans = max(n / 2 - left_cnt, n / 2 - right_cnt);
        cout << ans << endl;
    }
    else
    {

        int arr[n];
        int mid_value1 = (n / 2), mid_value2 = n / 2 + 1;
        int mid_index1, mid_index2;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mid_value1 == arr[i])
            {
                mid_index1 = i;
            }
            if (mid_value2 == arr[i])
            {
                mid_index2 = i;
            }
        }
        int left_cnt = 0, right_cnt = 0;
        int j = mid_index1 - 1;
        // left_search
        while (j >= 0)
        {
            if (arr[j] == mid_value1 - left_cnt - 1)
            {
                left_cnt++;
            }
            j--;
        }
        j = mid_index1 + 1;
        while (j < n)
        {
            if (arr[j] == mid_value1 + right_cnt + 1)
            {
                right_cnt++;
            }
            j++;
        }
        int ans = max(n / 2 - left_cnt - 1, n / 2 - right_cnt);
        // again for second one
        left_cnt = 0, right_cnt = 0;
        j = mid_index2 - 1;

        while (j >= 0)
        {
            if (arr[j] == mid_value2 - left_cnt - 1)
            {
                left_cnt++;
            }
            j--;
        }
        j = mid_index1 + 1;
        while (j < n)
        {
            if (arr[j] == mid_value2 + right_cnt + 1)
            {
                right_cnt++;
            }
            j++;
        }
        ans = max(ans, max(n / 2 - left_cnt, n / 2 - right_cnt - 1));

        cout << ans << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    for (int i = 1; i <= ttt; i++)
    {
        solve();
    }
    return 0;
}