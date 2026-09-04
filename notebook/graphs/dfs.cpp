#include <bits/stdc++.h>

using namespace std;

#define vi vector int

vector<vi> adj;
int n;
vector<bool> visited;

void dfs(int v){
    visited[v] = true;
    for(int u : adj[v]){
        if(!visited[u])
            dfs(u);
    }
}
