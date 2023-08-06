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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    while (ttt--)
    {
        string a, b;
        cin >> a >> b;
        int lena = a.length(), lenb = b.length();
        if (a[lena - 1] == b[lenb - 1])
        {
            if (a[lena - 1] == 'M')
            {
                cout << "=" << endl;
                continue;
            }
            if (lena == lenb)
            {
                cout << "=" << endl;
                continue;
            }
            if (a[lena - 1] == 'L')
            {
                 if (lena > lenb)
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                 if (lena < lenb)
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
        }

        else if (a[lena - 1] > b[lenb - 1])
        {
            cout << "<" << endl;
        }
        else
        {
            cout << ">" << endl;
        }
    }
    return 0;
}