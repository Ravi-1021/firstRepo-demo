#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> arr,vector<int> temp, vector<vector<int>> &ans,int mark[]){
    if(temp.size()==arr.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0; i<arr.size(); i++){
        if(mark[i]!=1){
            mark[i]=1;
            temp.push_back(arr[i]);
            solve(arr,temp,ans,mark);
            temp.pop_back();
            mark[i]=0; 
        }
    }

}
vector<vector<int>> permutation(vector<int> arr){
    vector<vector<int>> ans;
    vector<int> temp;
    int mark[arr.size()]={0};
    solve(arr,temp,ans,mark);
    return ans;
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    vector<vector<int>> ans;
    ans=permutation(arr);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}