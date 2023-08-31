#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            arr.push_back(n - x);
        }
        sort(arr.begin(), arr.end());
        int cnt = 0;
        n = n - 1;
        for (int i = 0; i < arr.size(); i++)
        {
            n = n - arr[i];
            if (n < 0)
            {
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
}