#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
 
void solve(){
    int n=1,k=0;
    string s,t;
    cin>>n>>k>>s>>t;
    unordered_map<char,int> f;
    for(auto& c:s)  f[c]--;
    for(auto& c:t)  f[c]++;
    for(auto& [c,t]:f)  if(t!=0){
 
        cout<<"NO\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(i-k<0 && i+k>=n && s[i]!=t[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt;
    cin >> ttt;
    for (int i = 1; i <= ttt; i++)
    {
        solve();
    }
    return 0;
}