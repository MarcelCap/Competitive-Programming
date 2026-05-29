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
    int k;cin>>k;
    string s;
    int op=0, cl=0;
    char c;
    while(k--){
        cin>>c;
        if(c=='(') op++;
        else if(c==')') cl++;
    }
    if(op!=cl) cout<<"no\n";
    else cout<<"yes\n";
}
