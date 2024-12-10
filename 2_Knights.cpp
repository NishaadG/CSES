#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;

void solve(){
    ll res = (ll)(tc*tc)*(ll)(tc*tc -1)/2 - 4*(ll)(tc-1)*(tc-2);
    cout<<res<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tests = 1;
    cin>>tests;
    for(tc = 1 ; tc <= tests ; tc++){
        solve();
    }
}