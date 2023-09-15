#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int n, k;
vector<lli> pos;
bool good(lli x)
{
    int count = 1;
    lli temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (pos[i] + temp > x)
        {
            temp = pos[i];
            count++;
        }
        else
        {
            temp += pos[i];
        }
    }
    return count <= k;
}
int main()
{
    cin >> n >> k;
    pos.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pos[i];
    }
    lli l = 0, r = 1e15;
    lli ans = 0;
    while (l <= r)
    {
        lli mid = (l + r) / 2;
        if (good(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}