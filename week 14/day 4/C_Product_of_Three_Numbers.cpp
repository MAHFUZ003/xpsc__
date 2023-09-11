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
        ll n;
        cin >> n;
        int a = -1, b = -1, c = -1;

        int i = 2;
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = i;
                break;
            }
        }
        n = n / a;
        if (a == -1)
        {
            cout <<"NO" << endl;
           continue;
        }
          for (i = a+1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                b = i;
                c = n/i;
                break;
            }
        }
        if(b==-1 || b==c)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    return 0;
}