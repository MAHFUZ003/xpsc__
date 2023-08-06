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
void solve()
{

    string s;
    int n, k;
    int ans = 0;
    cin >> n >> k >> s;
    map<int, int> m_uppercase, m_lowercase;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (m_uppercase[s[i] - 'a'] > 0)
            {
                m_uppercase[s[i] - 'a']--;
                ans++;
            }
            else
            {
                m_lowercase[s[i] - 'a']++;
            }
        }
        else
        {
            if (m_lowercase[s[i] - 'A'] > 0)
            {
                m_lowercase[s[i] - 'A']--;
                ans++;
            }
            else
            {
                m_uppercase[s[i] - 'A']++;
            }
        }
    }
    for (auto x : m_uppercase)
    {
        ans += min(k, x.second / 2);
        k -= min(k, x.second / 2);
    }
    for (auto x : m_lowercase)
    {
        ans += min(k, x.second / 2);
        k -= min(k, x.second / 2);
    }
    cout << ans << nL;
}
int main()
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