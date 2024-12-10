#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;

void solve(){
    ll num;
    cin>>num;
    ll count = 0;
    while(num>=5){
        count+=num/5;
        num = num/5;
    }
    cout<<count;
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