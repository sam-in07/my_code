#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<vector<ll>> adj;
bool cyccle = false;
vector<ll> visisted;
void dfs(ll s , ll pre ) {
   cout << s <<  ' ' ;
   visisted[s] = 1; 
   for(ll i= 0 ;i<adj[s].size() ; i++) {
    ll v = adj[s][i] ;
    if(visisted[v]==1   and v != pre ) {
        cyccle = 1 ; 
    }
    if(visisted[v]) {
       
        dfs(v , s );
    }
   }
   visisted[s] = 2 ; 
}



void solve() {
ll n  ,  e , i  , m  ;
cin >> n >> m ;
adj = vector<vector<ll>>(n+1);
for(i=0 ; i<m ; i++ ) { 
    ll u , v ;
    cin >> u >> v ;

    adj[u].push_back(v) ;
    adj[v].push_back(u) ;
}





}

int main() {
    solve();
    return 0;
}
