#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s(9);
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 9; i++)
        {
            cin >> s[i];
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if ((i == 0 && j == 0) || (i == 1 && j == 3) || (i == 2 && j == 6) || (i == 3 && j == 1) || (i == 4 && j == 4) || (i == 5 && j == 7) || (i == 6 && j == 2) || (i == 7 && j == 5) || (i == 8 && j == 8))
                {
                    if (s[i][j] == '1')
                    {
                        s[i][j] = '2';
                    }
                    else
                    {
                        s[i][j] = '1';
                    }
                }
            }
        }

        for (int i = 0; i < 9; i++)
        {

            cout << s[i] << endl;
        }
    }
    return 0;
}