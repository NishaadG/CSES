#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;

void solve(){
    int n;
    cin>>n;
    set<ll> st;
    for(int i=0;i<n;i++){
        ll num;
        cin>>num;
        st.insert(num);
    }
    cout<<st.size();
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