#include <iostream>
#include <bits/stdc++.h>
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
        int g=0;
        for(int i=0;i<arr.size();i++){
                g++;
            for(int j=i+1;j<arr.size();j++){
                if((arr[i]^arr[j])==2147483647){
                    arr.erase(arr.begin()+j);
                    j--;
                }
            }
            arr.erase(arr.begin()+i);
            i--;
        }
        cout<<g<<endl;

    }


    return 0;
}
