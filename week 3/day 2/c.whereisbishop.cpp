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
        string arr[8];
        for (int i = 0; i < 8; i++)
        {

            cin >> arr[i];
        }
        int flag = 0;
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                if (arr[i + 1][j + 1] == '#' && arr[i + 1][j - 1] == '#' && arr[i - 1][j + 1] == '#' && arr[i - 1][j - 1] == '#')
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
    }
    return 0;
}