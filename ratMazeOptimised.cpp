#include<bits/stdc++.h>
using namespace std;
void solve(int di[],int dj[],vector<vector<int>> vis,vector<string> &ans,int i,int j,int n,vector<vector<int>> m,string path){
    if(i==n-1 && j==n-1){
        ans.push_back(path);
        return;
    }
    string p="DLRU";
    for(int k=0; k<4; k++){
        int nexti=i+di[k];
        int nextj=j+dj[k];
        if(nexti>=0 && nexti<n && nextj>=0 && nextj<n && vis[nexti][nextj]==0 && m[nexti][nextj]==1  ){
            vis[nexti][nextj]=1;
            solve(di,dj,vis,ans,nexti,nextj,n,m,path+p[k]);
             vis[nexti][nextj]=0;
        }

    }
}
vector<string> findPath(vector<vector<int>> m, int n){
    vector<string> ans;
    string path="";
    vector<vector<int>> vis(n,vector<int> (n,0));
    int i=0,j=0;
    int di[]={1,0,0,-1};
    int dj[]={0,-1,1,0};
    if(m[0][0]==1){
        solve(di,dj,vis,ans,i,j,n,m,path);
    }
    return ans;
}
int main(){
    vector<vector<int>> m{{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans=findPath(m,4);
    for(int i=0; i<4; i++){
        cout<<ans[i]<<" ";
    }

}