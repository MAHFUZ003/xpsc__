#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main(){
   Faster;
   int t;                  cin>>t;
   while(t--){
      int n;               cin>>n;
      string s;            cin>>s;

      int balance=0;
      for(int i=0;i<n;i++){
         if(s[i]=='('){
            balance++;
         }
         else{
            balance--;
         }
      }

      if(balance!=0){
         cout<<-1<<endl;
         continue;
      }

      stack<int> later;

      vector<int> ans(n,2);

      bool done=true;

      for(int i=0;i<n;i++){
         if(s[i]=='('){
            later.push(i);
         }
         else{
            if(later.empty()){
               done=false;
               continue;
            }

            ans[i]=1;
            ans[later.top()]=1;
            later.pop();
         }
      }

      if(!done){
         while(!later.empty()){
            later.pop();
         }
         ans.assign(n,2);
         for(int i=0;i<n;i++){
            if(s[i]==')'){
               later.push(i);
            }
            else{
               if(later.empty()){
                  done=false;
                  continue;
               }

               ans[i]=1;
               ans[later.top()]=1;
               later.pop();
            }
         }
      }

      int colors=*max_element(ans.begin(),ans.end());

      cout<<colors<<endl;
      for(int i=0;i<n;i++){
         cout<<ans[i]<<" ";
      }
      cout<<endl;
   }
   return 0;
}