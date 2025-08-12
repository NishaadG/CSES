#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;

void solve(){
    int n , q;
    cin>>n>>q;
    vector<ll>pref(n+1,0);
    for(int i=0;i<n;i++){
        ll num;
        cin>>num;
        pref[i+1]=pref[i]+num;
    }
    while(q--){
        ll val1 , val2;
        cin>>val1>>val2;
        val1--;
        cout<<pref[val2]-pref[val1]<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tests = 1;
    //cin>>tests;
    for(tc = 1 ; tc <= tests ; tc++){
        solve();
    }
}