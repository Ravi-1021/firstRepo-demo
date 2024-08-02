#include<iostream>
#include<vector>
using namespace std;
//more optimised way than previous one
void solve(int index,vector<int> arr, vector<vector<int>> &ans){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index; i<arr.size(); i++){
        swap(arr[index],arr[i]);
        solve(index+1,arr,ans);
        swap(arr[index],arr[i]);
    }
}
vector<vector<int>> permutation(vector<int> arr){
    vector<vector<int>> ans;
    solve(0,arr,ans);
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