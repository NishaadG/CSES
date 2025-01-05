#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sort(x) sort(x.begin(),x.end());
ll tc;

void solve(){
    int n;
    cin>>n;
    ll k;
    cin>>k;
    vector<ll>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr);
    int r = n-1 , l = 0;
    int count =0 ;
    while(r>=l){
        ll currweight = arr[l]+arr[r];
        if(currweight<=k){
            r--;
            l++;
            count++;
        }
        else{
            r--;
            count++;
        }
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