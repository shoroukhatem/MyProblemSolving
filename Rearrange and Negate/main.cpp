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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr[i]=-arr[i];
            }
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
