#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int n, i, j, a, b, c[101][101], path[101][101], prev, x, y;
int main()
{
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        cin >> c[b][a];
        path[a][b] = path[b][a] = 1;
    }
    prev = 1;
    j = 1;
    do
    {
        for (i = 1; i <= n; i++)
        {
            if (path[j][i] && prev != i)
            {
                x += c[j][i];
                prev = j;
                j = i;
                break;
            }
        }
    } while (j != 1);
    j = prev;
    prev = 1;
    y = c[1][j];
    do
    {
        for (i = 1; i <= n; i++)
        {
            if (path[j][i] && prev != i)
            {
                y += c[j][i];
                prev = j;
                j = i;
                break;
            }
        }
    } while (j != 1);
    cout << min(x, y);
}
