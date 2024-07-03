#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> v[INT16_MAX];
// for creating adj list 
ll vis[INT16_MAX];
// visited array

void dfs(ll node) {
  vis[node] = 1;// visted cuurent  node 
  for(ll child : v[node]) 
  // asj od this node 
  {
    if(!vis[child])
    // checking those node are visisted or not 
    dfs(child); 
    // if not visited creat dfs 
  }
}

int main () {
  ll i , n , e , a , b ;
  cin >> n >> e ;
  for(i=1;i<=e;i++) {
    cin >> a >> b ;
    v[a].push_back(b);
    //adj list of a we have to insert b 
    v[b].push_back(a);
     //adj list of b we have to insert a
  }
  //node 
 for(i=1;i<=n;i++) {

  for(auto x : v[i]) cout << x << " " ;
  cout << endl;

 }
  //edge 
  for(i=1;i<=e;i++) {
  
  for(auto x : v[i]) cout << x << " " ;
  cout << endl;

 }
//   ll cc = 0 ;
//   for(i=1;i<=n;i++) 
//   if(!vis[i]) // not visited
//  dfs(i) , cc++;
  
//   cout << cc << endl;

}
