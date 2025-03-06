#include <iostream>
using namespace std;

int main() {
	// your code goes here
	return 0;
}#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int n, e;
void bfs(int s)
{
    queue<int> q;
    vector<int> visited(n + 1, 0);
    vector<int> dis(n + 1, -1);
    vector<int> par(n + 1, -1);

    q.push(s);
    visited[s] = 1;
    dis[s] = 0;
    par[s] = -1;

    while(!q.empty())
    {
        int u = q.front();  /// 1
        q.pop();
        for(auto x : adj[u]) {
            if(dis[x] == -1) {
                // cout << x << " ";   /// 2, 3
//                visited[x] = 1;
                dis[x] = dis[u] + 1;
                par[x] = u;
                q.push(x);
            }
        }
    }
    for(auto x : dis) {
        cout << x << " ";
    }

    int x = 5;
    while(x != -1)
    {
        cout << x << " ";
        x = par[x];
    }

}
int main(){
    cin >> n >> e;
    for(int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s;
    cin >> s;

    bfs(s);



    return 0;
}

