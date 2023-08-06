#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    set <int> customers;
    set <pair <int, int>> spend;
    map <int, int> money;
    int t; cin >> t;
    int c = 0;
    while(t --) {
        int x; cin >> x;
        if(x == 1) {
            int m; cin >> m;
            money[++ c] = m;
            customers.insert(c);
            spend.insert({m, c});
        }
        else if(x == 2) {
            int cur = *customers.begin();
            customers.erase(cur);
            spend.erase({money[cur], cur});
            cout << cur << " ";
        }
        else {
            auto it = prev(spend.end());
            it = spend.lower_bound({it->first, 0});
            spend.erase(it);
            customers.erase(it->second);
            cout << it->second << " ";
        }
    }
 
    return 0;
}
 