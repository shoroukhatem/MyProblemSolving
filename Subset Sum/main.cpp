#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int t;
void fun(vector<int> arr,int i,int sum,vector<int>&sub,vector<vector<int>>&ans){
    if(sum==t){
        ans.push_back(sub);
        return;
    }
    if(i==arr.size()){
        return;
    }
    sub.push_back(arr[i]);
    sum+=arr[i];
    fun(arr,i+1,sum,sub,ans);
    sub.pop_back();
    sum-=arr[i];
    fun(arr,i+1,sum,sub,ans);

}
int main()
{
   int n ;
   cin>>n>>t;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   vector<int>sub;
   vector<vector<int>>ans;
   fun(arr,0,0,sub,ans);
   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}
