#include<bits/stdc++.h>
using namespace std;
using lint = long long;
const int INF = 1e9 + 9;

int n, m;

int main() {
	int tc; scanf("%d", &tc);
	while (tc--) {
		scanf("%d%d", &n, &m);
		if (n % 3 == 0 || m % 3 == 0)
			printf("%d\n", n * m / 3);
		else
			printf("%d\n", n * m / 3 + 1);
	}
}