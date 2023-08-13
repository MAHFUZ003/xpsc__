#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(auto &it:a){
            cin >> it;
        }
        for(auto &it:b){
            cin >> it;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool suc = true;
        for(auto i = 0; i < n; ++i){
            if(a[i] == b[i] || a[i]+1 == b[i]){
                continue;
            }
            suc = false;
            break;
        }
        if(suc){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

