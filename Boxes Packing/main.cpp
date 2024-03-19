#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int>mp;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int mx=0;
    for(auto val : mp){
        if(val.second>mx){
            mx=val.second;
        }
    }
    cout<<mx<<endl;
    return 0;
}
