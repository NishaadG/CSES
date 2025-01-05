#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Sort(x) sort(x.begin(),x.end());
ll tc;

void solve(){
    int n ,m;
    cin>>n>>m;
    multiset<ll> ms;
    for(int i=0;i<n;i++){
        ll num;
        cin>>num;
        ms.insert(num);
    }
    vector<ll> ans(m);
    for(int i=0;i<m;i++){
        ll val;
        cin>>val;
        auto it = ms.upper_bound(val);
        if(it==ms.begin()){
            ans[i]=-1;
        }
        else{
            it--;
            ans[i] = *(it);
            ms.erase(it);
        }
    }
    for(auto it : ans){
        cout<<it<<"\n";
    }

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