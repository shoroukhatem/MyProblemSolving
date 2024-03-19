#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int t,n;
void fun(vector<int> arr,int i,int sum,vector<int>&sub,vector<vector<int>>&ans){
    if(sum==t){
        ans.push_back(sub);
        return;
    }
    if(i>=arr.size()||sum>t){
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

    while(scanf("%d %d",&t,&n),t||n){
        vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   vector<int>sub;
   vector<vector<int>>ans;
   fun(arr,0,0,sub,ans);
   cout<<"Sums of "<<t<<":"<<endl;
   if(ans.empty()){
    cout<<"NONE"<<endl;
   }
   else{
        set<string>str;
     for(int i=0;i<ans.size();i++){
            string s="";
    for(int j=0;j<ans[i].size();j++){
        if(j==ans[i].size()-1){
            //cout<<ans[i][j];
            s+=to_string(ans[i][j]);
        }
        else{
             s+=to_string(ans[i][j]);
             s+="+";
        }
    }
    if(str.count(s)==0){
        cout<<s<<endl;
        str.insert(s);
    }
   }
   }

    }

    return 0;
}
