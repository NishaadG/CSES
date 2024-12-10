#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int num;
    cin>>num;
    long long inc = 0;
    int prev;
    cin>>prev;
    for(int i = 0 ; i< num-1;i++){
        int temp;
        cin>>temp;
        if(temp<prev){
            inc+=prev - temp;
        }
        prev = temp<prev ? prev : temp;
    }
    cout<<inc;
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