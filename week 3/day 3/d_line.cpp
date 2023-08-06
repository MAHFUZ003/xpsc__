#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            sum += (n - i - 1);
            arr[i] = (n - i - 1);
        }
        else
        {
            arr[i] = i;
            sum += i;
        }
    }
    sort(arr, arr + n);
    for(int i =0;i<n;i++)
    {
        sum -= arr[i];
        sum += max(arr[i],n-arr[i]-1);
        cout<<sum<<" ";
    }
    cout<<nL;

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