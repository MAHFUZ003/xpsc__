#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    string s;
    cin>>n;
stack<string> q;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        q.push(s);
    }
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        s = q.top();
        q.pop();
        if (m[s] > 0)
        {
            continue;
        }
        m[s]++;
        int len = s.length();
        cout << s[len - 2] << s[len - 1];
    }
    cout << nL;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}