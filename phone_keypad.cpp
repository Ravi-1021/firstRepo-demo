#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
void solve(int index,string mapping[], string output,vector<string> &ans,string digit){
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }
    int number=digit[index]-'0';
    string value=mapping[number];
    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(index+1,mapping,output,ans,digit);
        output.pop_back();
    }

}
vector<string> phoneKeypad(string digit){
    vector<string> ans;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output;
    solve(0,mapping,output,ans,digit);
    return ans;
}

int main(){
    string digit="34";
    vector<string> ans;
    ans=phoneKeypad(digit);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}