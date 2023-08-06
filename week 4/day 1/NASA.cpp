#include <bits/stdc++.h>

using namespace std;

#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define ff     first
#define ss     second
#define pb     push_back


int main()
{
    vector<int> pal;
    pal.pb(0);
    string s;

    for(int i=1; i<(1<<15); i++)
    {
        s = to_string(i);

        int f = 1;
        for(int j=0, k=s.size()-1; j<k; j++, k--)
            f &= s[j]==s[k];

        if(f)       pal.pb(i);
    }
    
    _test
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for(auto &e: a)
            cin>>e;

        unordered_map<int, int> cnt;

        for(auto e: a)      cnt[e]++;

        ll int ans = 0;

        for(auto e: a)
        {
            for(auto p: pal)
                ans += cnt[(p^e)];

            cnt[e]--;
        }

        cout<<ans<<"\n";
    }
}