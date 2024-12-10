#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll num;
    cin>>num;
    while(num!=1){
        cout<<num<<" ";
        if(num%2){
            num = num*3 +1;
        }
        else{
            num = num/2;
        }
    }
    cout<<"1";
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