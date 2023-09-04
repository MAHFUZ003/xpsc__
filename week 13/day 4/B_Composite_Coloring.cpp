#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int32_t main()
{
	FIO;
	vi prm = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	w(t)
	{
		int n; cin >> n;
		mk(arr, n, int);

		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		mk(ans, n, int);

		for (int i = 0; i < n; ++i)
			ans[i] = -1;

		int cur_col = 1;

		for (int p : prm)
		{
			bool got = 0;
			for (int i = 0; i < n; ++i)
			{
				if (ans[i] != -1)
					continue;

				if (arr[i] % p)
					continue;

				got = 1;
				ans[i] = cur_col;
			}

			if (got)
				cur_col++;
		}

		cout << (cur_col - 1) << '\n';

		for (int i = 0; i < n; ++i)
			cout << ans[i] << ' ';

		cout << '\n';
	}
	return 0;
}