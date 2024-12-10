#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int num;
    cin>>num;
    if(num==1) {
        cout<<1;
        return;
    }
    if(num<=3){
        cout<<"NO SOLUTION";
        return;
    }
    for(int i = 2 ;i<=num;i+=2){
        cout<<i<<" ";
    }
    for(int i = 1 ; i<=num; i+=2){
        cout<<i<<" ";
    }
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