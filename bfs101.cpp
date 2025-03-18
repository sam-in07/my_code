#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve() {
ll n  ,  e , i  ; 
cin >> n >> e ;
vector<vector<ll>>adj(n+1);
vector<ll> part(n+1 , -1 ) ; 
for(i=0 ; i<e ; i++) {
ll u , v ;
cin >> u >> v ;
adj[u].push_back(v);
adj[v].push_back(u);
}
ll s ;
 cin >> s ;
vector<ll>level (1+n  , -1 ) ;
level[s] = 0 ;
queue<ll>q ;
q.push(s) ;


while (!q.empty())
{
    ll u = q.front();
    q.pop();

    for(auto v : adj[u]) {
           if(level[v] = -1)  {
              level[v] =   level[u] +1 ;
              part[v] = u ;
               q.push(v) ; 
           }
    }


}

for(i = 1 ; i<=n ; i++) { 
    cout << level[i]  <<  " " ;

}

cout << endl; 

ll u, v;
cin >> u >> v;
vector<int> path;
path.push_back(v);
while(part[v] != -1) {
    path.push_back(part[v]);
    v = part[v];
}
for(auto i : path) {
    cout << i << " -> ";
}




}

int main() {
    solve();
    return 0;
}
