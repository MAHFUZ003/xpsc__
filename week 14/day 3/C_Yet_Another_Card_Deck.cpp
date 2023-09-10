#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <iomanip>
#include <cstdlib>
#include <stack>
#include <cstring>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repp(i,a,b) for(int i=(a);i<(b);i++)
#define lep(i,a,b) for(int i=(a);i>=(b);i--) 
#define lepp(i,a,b) for(int i=(a);i>(b);i--)
#define pii pair<int,int>
#define pll pair<long long,long long>
#define mp make_pair
#define All(x) x.begin(),x.end() 
#define ms(a,b) memset(a,b,sizeof(a)) 
#define INF 0x3f3f3f3f
#define INFF 0x3f3f3f3f3f3f3f3f 
#define multi int T;scanf("%d",&T);while(T--) 
using namespace std;
typedef long long ll;
typedef double db;
const int N=3e5+5;
const int mod=1e9+7;
const db eps=1e-6;                                                                            
const db pi=acos(-1.0);
int n,q,a[N],pos[55],t;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("D:\\work\\data.in","r",stdin);
    #endif
    cin>>n>>q;
    rep(i,1,n){
        cin>>a[i];
        if(!pos[a[i]]) pos[a[i]]=i;
    }
    rep(i,1,q){
        cin>>t;
        cout<<pos[t]<<" ";
        rep(j,1,50){
            if(pos[j]<pos[t]) ++pos[j];
        }
        pos[t]=1;
    }
}