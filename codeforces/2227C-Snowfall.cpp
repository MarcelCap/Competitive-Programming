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
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
void solve(){
    int n; cin>>n;
    /*
    2 ou 3
    ímpares não 3
    3 ou 2
    6 (começo/final)
    */
    vector<int> six = {};
    vector<int> seven = {};
    vector<int> three = {};
    vector<int> two = {};
    int a;
    while(n--){
        cin>>a;
        if(!(a%6)) six.push_back(a);
        else if(!(a%2)) two.push_back(a);
        else if(!(a%3)) three.push_back(a);
        else seven.push_back(a);
    }
    for(auto i : six) cout<<i<<" ";
    for(auto i : two) cout<<i<<" ";
    for(auto i : seven) cout<<i<<" ";
    bool primeiro = true;
    for(auto i : three){
        if(!primeiro) cout<<" ";
        cout<<i;
        primeiro=false;
    }
    cout<<"\n";
}
