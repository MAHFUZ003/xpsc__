#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF (ll)1e16
 
 
vector<int> adj[N];
vector<ll> cost;
vector<bool> visited;
 
void DFS(int curr){
   ll res=0;
   visited[curr]=true;
   bool hasChild=false;
   for(auto i:adj[curr]){
      hasChild=true;
      if(!visited[i]){
         DFS(i);
      }
      res+=cost[i];
   }
   if(!hasChild){
      res=INF;
   }
   cost[curr]=min(cost[curr],res);
}
 
int main(){
   Faster;
   int t;                     cin>>t;
   while(t--){
      int n,k;                cin>>n>>k;
 
 
      cost.assign(n+2,INF);
      visited.assign(n+2,false);
      for(int i=0;i<=n;i++){
         adj[i].clear();
      }
 
 
      for(int i=1;i<=n;i++){
         cin>>cost[i];
      }
      for(int i=1;i<=k;i++){
         int p;               cin>>p;
         cost[p]=0;
      }
 
      for(int i=1;i<=n;i++){
         int req;             cin>>req;
         for(int j=1;j<=req;j++){
            int x;            cin>>x;
            adj[i].push_back(x);
         }
      }
 
      for(int i=1;i<=n;i++){
         if(!visited[i]){
            DFS(i);
         }
      }
 
      for(int i=1;i<=n;i++){
         cout<<cost[i]<<" ";
      }
      cout<<endl; 
   }
   return 0;
}