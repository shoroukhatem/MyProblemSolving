#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int freq = 1,minCost=0;

    for(int i=0;i<n;i++){
        minCost+=freq*arr[i];
        if((i+1)%k==0){
            freq++;
        }
    }
    cout<<minCost<<endl;
    return 0;
}
