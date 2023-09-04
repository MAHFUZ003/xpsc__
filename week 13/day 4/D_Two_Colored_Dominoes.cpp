 #include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"

void solve()
{
   int n,m;
    cin>>n>>m;
    vector<string>s(n);
 
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
 
    for(int i=0; i<n; i++)
    {
        int tot = 0;
        for(int j=0; j<m; j++)
        {
            if(s[i][j]=='U' || s[i][j]=='D')
            {
                tot++;
            }
        }
        if(tot%2)
        {
            cout<<"-1\n";
            return;
        }
    }
    for(int i=0; i<m; i++)
    {
        int tot = 0;
        for(int j=0; j<n; j++)
        {
            if(s[j][i]=='L' || s[j][i]=='R')
            {
                tot++;
            }
        }
        if(tot%2)
        {
            cout<<"-1\n";
            return;
        }
    }
 
    vector<string>ans = s;
    vector<vector<bool> >vis(n,vector<bool>(m,false));
 
    for(int i=0; i<n; i++)
    {
        int col = 0;
        for(int j=0; j<m; j++)
        {
            if(vis[i][j])
                continue;
            if(s[i][j]=='U')
            {
                vis[i][j] = 1;
                vis[i+1][j] = 1;
                if(col==0)
                {
                    ans[i][j] = 'W';
                    ans[i+1][j] = 'B';
                }
                else
                {
                    ans[i][j] = 'B';
                    ans[i+1][j] = 'W';
                }
                col^=1;
            }
        }
    }
 
    for(int i=0; i<m; i++)
    {
        int col = 0;
        for(int j=0; j<n; j++)
        {
            if(vis[j][i])
                continue;
            if(s[j][i]=='L')
            {
                vis[j][i] = 1;
                vis[j][i+1] = 1;
                if(col==0)
                {
                    ans[j][i] = 'W';
                    ans[j][i+1] = 'B';
                }
                else
                {
                    ans[j][i] = 'B';
                    ans[j][i+1] = 'W';
                }
                col^=1;
            }
        }
    }
 
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<"\n";
    }
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
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