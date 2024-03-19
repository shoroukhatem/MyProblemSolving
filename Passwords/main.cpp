#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string rules;
vector<vector<string>>ans;
void solve(int idxR,vector<string>pass,vector<vector<string>>&ans,vector<string>dic){
    if(idxR==rules.size()){
        ans.push_back(pass);
        return;
    }
    if(rules[idxR]=='#'){
        for(int i=0;i<dic.size();i++){
            pass.push_back(dic[i]);
            solve(idxR+1,pass,ans,dic);
            pass.pop_back();
        }
    }
    if(rules[idxR]=='0'){
        for(int i=0;i<10;i++){
            pass.push_back(to_string(i));
            solve(idxR+1,pass,ans,dic);
            pass.pop_back();
        }
    }
}

int main()
{
    int n;
    while(cin>>n){
        vector<vector<string>>ans;
        vector<string>dic;
        vector<string>pass;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            dic.push_back(str);
        }
        int m;
        cin>>m;
        while(m--){
            cin>>rules;
            solve(0,pass,ans,dic);
            cout<<"--"<<endl;
            for(int i=0;i<ans.size();i++){
                    string str="";
                for(int j=0;j<ans[i].size();j++){
                    str+=ans[i][j];
                }
                cout<<str<<endl;
            }
        }
    }
    return 0;
}
