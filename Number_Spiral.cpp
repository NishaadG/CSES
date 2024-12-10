#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll y , x;
    cin>>y>>x;
    if(y>x){
        ll inner = (y-1)*(y-1);
        if(y%2){
            cout<<inner+x;
        }
        else{
            cout<<inner+(2*y-x);
        }
    }
    else{
        ll inner = (x-1)*(x-1);
        if(x%2){
            cout<<inner+(2*x-y);
        }
        else{
            cout<<inner+y;
        }
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tests = 1;
    cin>>tests;
    while(tests--){
        solve();
    }
}