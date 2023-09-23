#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
long long kits[N];
int t;
long long n;
int check;
bool find(int pos)
{
    return kits[pos] >= check;
}

int main()
{
    cin >> n;
    long long x = 0;
    long long y;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        kits[i] = x + y;
        x = kits[i];
       // cout<<kits[i]<<endl;
    }

    cin >> t;
    while (t--)
    {
        cin >> check;
        long long lo = 0, hi = n - 1, mid;
        while (hi - lo > 1)
        {

            mid = (hi + lo) / 2;
            if (find(mid))
            {
                hi = mid;
            }
            else
            {
                lo = mid;
            }
        }
        if (find(lo))
        {
            cout << lo+1 << endl;
        }
        else
        {
            cout << hi+1 << endl;
        }
    }
    return 0;
}