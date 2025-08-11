#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;

template <typename T>
struct FenwickTree {
    int n;
    vector<T> bit;

    FenwickTree(int size) : n(size), bit(size + 1, T()) {}

    void update(int idx, T delta) {
        for (++idx; idx <= n; idx += idx & -idx) {
            bit[idx] += delta;
        }
    }

    T query(int idx) {
        T sum = T();
        for (++idx; idx > 0; idx -= idx & -idx) {
            sum += bit[idx];
        }
        return sum;
    }

    T query(int l, int r) {
        if (l > r) {
            return T();
        }
        return query(r) - query(l - 1);
    }
};

void solve(){
    int n,q;
    cin>>n>>q;
    FenwickTree<ll>ft(n);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        ft.update(i,num);
    }
    while(q--){
        int type , val1,val2;
        cin>>type>>val1>>val2;
        if(type==2){
            val1--;
            val2--;
            cout<<ft.query(val1,val2)<<"\n";
        }
        else{
            val1--;
            int val = ft.query(val1,val1);
            ft.update(val1 , val2-val);
        }
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