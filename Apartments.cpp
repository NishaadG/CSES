#include <bits/stdc++.h>
using namespace std;
#define sort(x) sort(x.begin(),x.end());
#define ll long long
ll tc;

void solve(){
    ll n , m , k;
    cin>>n>>m>>k;
    vector<ll>p(n) , a(m);
    
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    sort(p);
    sort(a);
    int i=0,j=0;
    int count=0;
    while(i<n&&j<m){
        if((a[j]>=(p[i]-k))&&(a[j]<=(p[i]+k))){
            i++;
            j++;
            count++;
        }
        else if(p[i]-k>a[j]){
            j++;
        }
        else if(p[i]+k<a[j]){
            i++;
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