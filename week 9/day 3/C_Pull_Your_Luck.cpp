#include <bits/stdc++.h>
#define lli long long int
using namespace std;
void solve()
{
  int n = 1, x = 0, p = 0;
  cin >> n >> x >> p;
  int reqd = (n - x) % n;
  int sum = 0;
  for (int i = 1; i <= min(2 * n, p); i++)
  {
    sum += i;
    if (sum % n == reqd)
    {
      cout << "Yes\n";
      return;
    }
    sum %= n;
  }
  cout << "No\n";
}

int32_t main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T = 1;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}