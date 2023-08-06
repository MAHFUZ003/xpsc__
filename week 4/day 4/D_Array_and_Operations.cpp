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
void solve(int p)
{
   // cout<<p<<" "<<endl;
    int n, k;
    cin >> n >> k;
    int arr[n];
  //  cout<<" ok 1 "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll score = 0;
    vector<ll> final;
 //cout<<" ok 2 "<<endl;
    for (int i = 0; i < n; i++)
    {
        if (i < (n - 2 * k))
        {
            score += arr[i];
             //cout<<" ok 3 "<<endl;
        }
        else
        {
            final.push_back(arr[i]);
            // cout<<" ok 4 "<<endl;
        }
    }
   // cout<<score;
    sort(final.begin(), final.end());
    for (int i = 0; i < k; i++)
    {
        score += (final[i] / final[k + i]);
      //  cout<<score<<endl;
    }
    cout << score << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
   for(int i =1;i<=ttt;i++)
    {
        solve(i);
    }
    return 0;
}