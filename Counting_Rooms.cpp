#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tc;

void dfs(int i , int j , vector<string>&mat, vector<vector<int>>&vis , int n, int m){
    if(i>=n|| i<0 || j >=m || j<0 || vis[i][j]==1 || mat[i][j]=='#') return;
    vis[i][j]=1;
    //cout<<i<<" "<<j<<" ";
    //cout<<vis[i][j]<<"\n";
    vector<int>dx = {-1 , 0 , 1 , 0};
    vector<int>dy = {0 , 1 , 0 , -1};
    for(int k=0;k<4;k++){
        int newi = i +dx[k] ;
        int newj = j +dy[k] ;
        dfs(newi , newj , mat,vis , n , m);
    }
}


void solve(){
    int n,m;
    cin>>n>>m;
    vector<string>mat(n);
    vector<vector<int>>vis(n, vector<int>(m,0));
    for(int i=0;i<n;i++) cin>>mat[i];
    int count =0 ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='.'&&vis[i][j]==0){
                dfs(i , j , mat,vis , n , m);
                count++;
            }
        }
    }
    cout<<count<<"\n";
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