#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int t;
void SumTC(vector<int> arr,int i,int sum,vector<int>&sub,map<int,vector<int>>&ans){
    if(sum==t){
        ans[sum]=sub;
        return;
    }
    if(sum<t){
        ans[sum]=sub;
    }
    if(i==arr.size()){
        return;
    }
    sub.push_back(arr[i]);
    sum+=arr[i];
    SumTC(arr,i+1,sum,sub,ans);
    sub.pop_back();
    sum-=arr[i];
    SumTC(arr,i+1,sum,sub,ans);

}
int main()
{
    //READ("input.txt");
    while(cin>>t && t != 0){
        int n;
        cin>>n;
        vector<int>CD(n);
    for(int i=0;i<n;i++){
        cin>>CD[i];
    }

    vector<int>sub;
    map<int,vector<int>>ans;
    SumTC(CD,0,0,sub,ans);
    vector<int>res = ans.rbegin()->second;
    int sum =ans.rbegin()->first;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<"sum:"<<sum<<endl;
    }

    return 0;
}
