#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            k-=arr[i];
            c++;
        }
        if(k<=0){
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
