#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << (n / 2) << " " << (n / 2) - 1
                 << " 1" << endl;
        }
        else
        {
            int m = n - 1;
            if ((m / 2) % 2 == 0)
            {
                cout << (m / 2) + 1 << " " << (m / 2) - 1
                     << " 1" << endl;
            }
            else
            {
                cout << (m / 2) + 2 << " " << (m / 2) - 2
                     << " 1" << endl;
            }
        }
    }
    return 0;
}