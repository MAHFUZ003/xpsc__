 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    int N = 1e6 + 1;
    vector<vector<int>> div(N);
 
    for(int i=1; i<N; i++)
    {
        for(int j=2*i; j<N; j+=i)
            div[j].pb(i);
    }
 
    vector<bool> pos(26);
 
    _test
    {
        int n;
        cin>>n;
 
        string ans;
        ans.pb('a');
 
        for(int i=1, f; i<n; i++)
        {
            fill(pos.begin(), pos.end(), true);
            f = 1;
 
            for(auto e: div[n])
            {
                if((int)(ans.size())-e >= 0)
                    pos[ans[ans.size()-e]-'a'] = false;
            }
 
            for(int j=0; j<26; j++)
            {
                if(pos[j])
                {
                    f = 0;
                    ans.pb('a'+j);
                    break;
                }
            }
        }
 
        cout<<ans<<"\n";
    }
}
 