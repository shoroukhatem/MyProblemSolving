#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%3==0){
            cout<<0<<endl;
        }
        else if(sum%3==1){
            vector<int>::iterator it;
            it = find(arr.begin(),arr.end(),1);
            if(it!=arr.end()){
                arr.erase(it);
                cout<<1<<endl;
            }
            else{
               cout<<2<<endl;
               }
        }
        else{
            vector<int>::iterator it;
            it = find(arr.begin(),arr.end(),2);
            if(it!=arr.end()){
                arr.erase(it);
                cout<<1<<endl;
            }
            else{
               cout<<1<<endl;
               }
        }

   }
    return 0;
}
