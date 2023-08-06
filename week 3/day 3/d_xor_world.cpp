#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

long long range_xor(long long n)
{
    if (n % 4 == 3)
    {
        return 0;
    }
    else if (n % 4 == 2)
    {
        return n + 1;
    }
    else if (n % 4 == 1)
    {
        return 1;
    }
    else
    {
        return n;
    }
}

void solve()
{
    long long l, r;
    cin >> l >> r;
    if (l == 0)
    {
        cout << range_xor(r) << endl;
    }
    else
    {
        cout << (range_xor(r) ^ range_xor(l - 1)) << endl;
    }
}
int main()
{
    solve();
}