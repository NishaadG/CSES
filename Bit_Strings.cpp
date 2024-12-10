#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;
ll MOD = 1e9+7;

ll power(ll base , ll exp){
    ll result = 1;
    while(exp){
        if(exp%2) result = (result*base)%MOD;
        base = (base*base)%MOD;
        exp = exp/2;
    }
    return result;
}

void solve(){
    ll num;
    cin>>num;
    cout<<power(2 , num);
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