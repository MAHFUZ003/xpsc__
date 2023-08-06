#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n;i= i + 2)
            {
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
        if (n % 2 == 1)
        {
            for (int i = 1; i < n; i=i + 2)
            {
                if (arr[i] > arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
        if (is_sorted(arr, arr + n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}