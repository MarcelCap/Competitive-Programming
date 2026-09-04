#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ql cout<<"\n";
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int n, m;
vector<vector<bool>> visited;
vector<vi> lake;

int dfs(int l, int c);

void solve();

int main(){
    int t;cin>>t;
    while(t--)
    solve();
    return 0;
}

int dfs(int l, int c){
    // (visited = 1) && (lake[l][c]>0)
    if(l<0 || c<0 || l>=n || c>=m || visited[l][c] || lake[l][c]==0) return 0;
    visited[l][c] = true;

    int vol = lake[l][c];
    vol += dfs(l-1, c) + dfs(l+1, c) +  dfs(l, c-1) + dfs(l, c+1);
    return vol;
}

void solve(){
    cin>>n>>m;
    lake.assign(n, vector<int>(m));
    visited.assign(n, vector<bool>(m, false));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> lake[i][j];
        }
    }
    int maxans=0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!visited[i][j] && lake[i][j]>0)
                maxans = max(maxans, dfs(i, j));
        }
    }
    cout<<maxans;
    ql
}
