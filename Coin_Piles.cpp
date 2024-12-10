#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;

void solve(){
    ll a , b;
    cin>>a>>b;
    if((a+b)%3){
        cout<<"NO\n";
        return;
    }
    if(a>b){
        if(b<=a&&b*2>=a) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{
        if(a<=b&&a*2>=b) cout<<"YES\n";
        else cout<<"NO\n";
    }
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