#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;

void solve(){
    ll num;
    cin>>num;
    ll sum = (num*(num+1))/2;
    if(sum%2){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    sum = sum/2;
    vector <int>  arr1;
    vector <int> arr2;
    while(num){
        if(sum-num>=0){
            sum-=num;
            arr1.push_back(num);
        }
        else{
            arr2.push_back(num);
        }
        num--;
    }
    cout<<arr1.size()<<"\n";
    for(auto it :  arr1){
        cout<<it<<" ";
    }
    cout<<"\n"<<arr2.size()<<"\n";
    for(auto it :arr2){
        cout<<it<<" ";
    }
    cout<<"\n";
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