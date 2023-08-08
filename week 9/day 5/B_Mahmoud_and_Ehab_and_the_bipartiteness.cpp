#include <iostream>
#include <vector>
#include <cassert>
#include <stack>

using namespace std;

typedef long long int64;
int main() {

    int n;
	cin >> n;

	vector<vector<int>> adj(n);
	vector<bool> vis(n, false);
	vector<int> col(n, -1);

	for (int i = 0; i < n-1; i += 1) {
		int a, b;
		cin >> a >> b;
		a -= 1; b -= 1;

		if (!vis[a]) {
			adj[a] = {b};
			vis[a] = true;
		} else {
			adj[a].push_back(b);
		}

		if (!vis[b]) {
			adj[b] = {a};
			vis[b] = true;
		} else {
			adj[b].push_back(a);
		}
	}

	// col[0] = 0;
	// int ptr = 0;
	// int top = 0;
	// vector<int> stk(n, -1);
	// stk[ptr] = 0;

	// while (ptr < n) {
	// 	int cur = stk[ptr];
	// 	ptr += 1;
	// 	for (int i = 0; i < (int)adj[cur].size(); i += 1) {
	// 		if (col[adj[cur][i]] < 0) {
	// 			stk[++top] = adj[cur][i];
	// 			col[adj[cur][i]] = 1 - col[cur];
	// 		}
	// 	}
	// }

	col[0] = 0;
	stack<int> stk;
	stk.push(0);

	while (!stk.empty()) {
		int cur = stk.top();
		stk.pop();

		for (int i = 0; i < (int)adj[cur].size(); i += 1) {
			if (col[adj[cur][i]] < 0) {
				stk.push(adj[cur][i]);
				col[adj[cur][i]] = 1 - col[cur];
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i += 1) {
		cnt += (col[i] == 1);
		//cerr << col[i] << '\n';
	}

	long long ans = (int64)(n-cnt) * (int64)cnt - (int64)(n-1);

	cout << ans;
	return 0;
}