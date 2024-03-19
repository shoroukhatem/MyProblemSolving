#include <iostream>
#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;



int main() {

    int n,s;
    cin>>n>>s;
    multimap<char,pair<int,int>>mp;
    unordered_multimap<char,pair<int,int>>ans;
    vector<pair<int,int>>vecB;
    vector<pair<int,int>>vecS;
    for(int i=0;i<n;i++){
        char d;
        int p,q;
        cin>>d>>p>>q;
        auto found = mp.find(d);
        if(found != mp.end()&&found->second.first==p){
            int sum= q+found->second.second;
            mp.erase(found);
            mp.insert({d,{p,sum}});
        }
        else{
            mp.insert({d,{p,q}});
        }
    }

    for(auto val : mp){
            if(val.first=='B'){
                vecB.push_back(val.second);
            }
            else if(val.first=='S'){
                vecS.push_back(val.second);
            }
    }
    for(int i=0;i<s;i++){
    auto min_it = min_element(vecB.begin(), vecB.end(),[](const auto& a, const auto& b) { return a.first > b.first; });
    if(min_it!=vecS.end()){
        ans.insert({'B',{min_it->first,min_it->second }});
        vecB.erase(min_it);
    }
    }
    for(int i=0;i<s;i++){
    auto max_it = max_element(vecS.begin(), vecS.end(),[](const auto& a, const auto& b) { return a.first < b.first; });
    if(max_it!=vecS.end()){
        ans.insert({'S',{max_it->first,max_it->second }});
        vecS.erase(max_it);
    }
    }

    for(auto val:ans){
        cout<<val.first<<" "<<val.second.first<<" "<<val.second.second<<endl;
    }
    return 0;
}
