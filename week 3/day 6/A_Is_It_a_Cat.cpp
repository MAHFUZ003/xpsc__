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
    int n;
    cin>>n;
    cin >> s;
    int i = 0;
    int flag = 0;
    if (s[i] == 'm' || s[i] == 'M')
    {

        while (s[i] == 'm' || s[i] == 'M')
        {
            i++;
        }
    }
    else
    {
        flag = 1;
    }
    if (s[i] == 'e' || s[i] == 'E')
    {

        while (s[i] == 'e' || s[i] == 'E')
        {
            i++;
        }
    }
    else
    {
        flag = 1;
    }
    if (s[i] == 'o' || s[i] == 'O')
    {

        while (s[i] == 'o' || s[i] == 'O')
        {
            i++;
        }
    }
    else
    {
        flag = 1;
    }
    if (s[i] == 'w' || s[i] == 'W')
    {

        while (s[i] == 'w' || s[i] == 'W')
        {
            i++;
        }
    }
    else
    {
        flag = 1;
    }
    if(flag==1 || i!=n)
    {
        cout<<"NO"<<nL;
    }
    else
    {
        cout<<"YES"<<nL;
    }
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