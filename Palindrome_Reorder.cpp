#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;

void solve(){
    string s;
    cin>>s;
    unordered_map <char , int> mpp;
    for(auto it:s){
        mpp[it]++;
    }
    int odds = 0;
    char odd;
    for(auto it : mpp){
        if(it.second%2!=0){
            odds++;
        }
    }
    if(odds>1){
        cout<<"NO SOLUTION";
        return;
    }
    int n = s.size();
    string ans(n ,' ');
    int left = 0 , right = n -1;
    for(int i = 0; i < n ; i++){
        if(mpp[s[i]]%2==1){
            ans[n/2]=s[i];
            mpp[s[i]]--;
        }
        while(mpp[s[i]]>0){
            ans[left++] = ans[right--] = s[i];
            mpp[s[i]]-=2;
        }
    }
    cout<<ans;
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