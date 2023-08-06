#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());

        int ans=arr[0];
  
       for(int i=1;i<n;i++)
       {
           ans= max(ans,(arr[i]-arr[i-1]));
       }
cout<<ans<<endl;
     }
    return 0;
}