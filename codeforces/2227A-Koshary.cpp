#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define ql "\n"
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve();

int main(){
    fastio
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    short int x,y;
    cin >> x >> y;
    if(x%2 && y%2)
        cout<<"no\n";
    else
        cout<<"yes\n";
}
