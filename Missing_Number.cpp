#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll num;
    cin>>num;
    ll sum  = num*(num+1)/2;
    for(int i = 0; i <num-1; i++){
        ll temp;
        cin>>temp;
        sum-=temp;
    }
    cout<<sum;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tests = 1;
    //cin>>tests;
    while(tests--){
        solve();
    }
}