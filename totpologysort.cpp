#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<vector<ll>> adj;
vector<ll> visisted;
//totplogy sort
vector<ll> st, en;
bool cycle = 0;
ll time = 1;
void dfs(ll s) {
    visisted[s] = 1;
    st[s] = time++;
    for(ll i = 0; i < adj[s].size(); i++) {
        ll v = adj[s][i];
        if(visisted[s] == 1 && par != v) {
            cycle = 1;
        }
        if(!visisted[v]) {
            dfs(v);
        }
    }
    visisted[s] = 2;
    en[s] = time++;
}



void solve() {
ll n  ,  e , i  , m  ;
cin >> n >> m ;
adj = vector<vector<ll>>(n+1);
visisted = vector<ll>(n+1 , 0 ) ;
st = vector<ll>(n + 1, 0);
en = vector<ll>(n + 1, 0);
for(i=0 ; i<m ; i++ ) { 
    ll u , v ;
    cin >> u >> v ;

    adj[u].push_back(v) ;
    adj[v].push_back(u) ;
}
// for(i = 0 ; i <  n ; i++) {
//     sort(adj[i+1].begin() , adj[i+1].end())  ;
// }

dfs(1);


}

int main() {
    solve();
    return 0;
}
