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
int n, m;
int arr[200][200];
void refresh()
{
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 200; j++)
        {
            arr[i][j] = 0;
        }
    }
}

int countsum(int i, int j)
{
    int sum = arr[i][j];

    int x, y;
    x = i - 1;
    y = j - 1;
    while (x >= 0 && y >= 0)
    {
        sum = sum + arr[x][y];
        x = x - 1, y = y - 1;
    }
    x = i - 1;
    y = j + 1;
    while (x >= 0 && y < m)
    {
        sum = sum + arr[x][y];
        x = x - 1, y = y + 1;
    }
    x = i + 1;
    y = j - 1;
    while (x < n && y >= 0)
    {
        sum = sum + arr[x][y];
        x = x + 1, y = y - 1;
    }
    x = i + 1;
    y = j + 1;
    while (x < n && y < m)
    {
        sum = sum + arr[x][y];
        x = x + 1, y = y + 1;
    }
    // cout << sum << " " << i << "  " << j << endl;
    return sum;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        refresh();
        n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int sum = 0;
        int maxi, maxj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (countsum(i, j) > sum)
                {
                    sum = countsum(i, j);
                    maxi = i;
                    maxj = j;
                }
            }
        }
        cout << sum << endl;
        // cout << maxi << " " << maxj << endl;
    }
    return 0;
}