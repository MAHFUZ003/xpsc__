#include <iostream>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef long int li;
typedef unsigned long int uli;
typedef long long int lli;
typedef unsigned long long int ull;

int main() {
    int T;
    cin >> T;
    while(T--) {
        lli n,c;
        cin >> n;
        if(n==1)
            c=0;
            
        else if(n%2!=0)
            c=1 + 2*(n/2- 1) + n/2;
            
        else
            c= 2*(n/2- 1) + n/2 - 1;
            
        cout << c << endl;
    }
	return 0;
}