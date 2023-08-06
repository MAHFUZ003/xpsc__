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
    char a;
    cin >> a;
    string s;
    cin >> s;
    int last_index = -1;
    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
        if (s[i] == a)
        {
            last_index = i;
        }
    }
 //cout<<"last_index "<<last_index<<endl;
    if (m[a] == n)
    {
        cout << 0 << endl;
        return;
    }
    if (2*(last_index+1) > ((n)))
    {
        cout << 1 <<endl<<last_index + 1 << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << n  << " " << n -1 << endl;
    }
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