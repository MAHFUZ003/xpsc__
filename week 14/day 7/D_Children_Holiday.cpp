#include <bits/stdc++.h>
using namespace std;
bool is_prime(int c)
{
    if (c == 1)
        return false;
    if (c == 2)
        return true;
    for (int i = 2; i * i <= c; i++)
    {

        if (c % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = a + b;
        bool f = is_prime(c);
        if (f == true)

            cout << "Alice" << endl;

        else

            cout << "Bob" << endl;
    }
}