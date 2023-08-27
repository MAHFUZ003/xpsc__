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
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    ans.push_back(arr[0]);
    int cnt = 1;
   // int i = 0;
    int flag;
    if (arr[1] > arr[0])
    { // going up
        flag = 1;
    }
    else
    {
        // going down
        flag = 0;
    }
    int i = 1;
    while (i < n)
    {
        if (flag)
        {
            while (i < n && arr[i] > arr[i - 1])
            {

                i++;
            }
            ans.push_back(arr[i - 1]);
            cnt++;
            flag = 0;
        }
        else
        {
            while (i < n && arr[i] < arr[i - 1])
            {

                i++;
            }
            ans.push_back(arr[i - 1]);
            cnt++;
            flag = 1;
        }
    }
    cout<<ans.size()<<endl;
    for(auto x : ans )
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}