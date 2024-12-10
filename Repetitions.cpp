#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;
    char curr = s[0];
    int maxcount = 1;
    int c = 0;
    for(int i = 0 ;i<s.size();i++){
        if(curr==s[i]){
            c++;
        }
        else{
            maxcount = max(c, maxcount);
            c=1;
            curr = s[i];
        }
    }
    maxcount = max(c, maxcount);
    cout<<maxcount;
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