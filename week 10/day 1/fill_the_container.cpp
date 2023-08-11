#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"



 
int n, m, c[1100];
 
bool simul(int cap) {
    int tot = 0, cur = 0;
    for(int i = 0; i < n; i++) {
        if(c[i] > cap) return false;
        if(cur + c[i] > cap) cur = 0;
        if(cur == 0) tot++;
        cur += c[i];
        if(tot > m) return false;
    }
    return true;
}
 
int main() {
 
    while(scanf("%d %d", &n, &m) == 2) {
        for(int i = 0; i < n; i++)
            scanf("%d", &c[i]);
 
        int high = 1000000000, low = 0;
        while(high - low > 0) {
            if(simul(high)) {
                high = low + (high - low) / 2;
            } else {
                low = high;
                high = high + high / 2;
            }
        }
        printf("%d\n", high + 1);
    }
    return 0;
}
// check constraints 
// at first try a brute force way to solve 
// then optimization



//  if its array:
//  1. try greedy
//  2. if it is a result of subproblems try dp
//  3. if it is showing for  a range minimum or maximum
//    3.1 tttttffffff
//    else
//    3.2 ffffftttttt
//    try binary search