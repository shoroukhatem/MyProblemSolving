#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string dir;
    cin>>dir;
   vector<long long> arr;
    for(int i=0;i<n;i++){
            long long x ;
    cin>>x;
        arr.push_back(x);
    }
    long long s=LLONG_MAX;
    for(int i=0;i<n-1;i++){
        if(dir[i]=='R' && dir[i+1]=='L'){
            s = min((arr[i+1]-arr[i])/2,s);
        }
    }
    if(s==LLONG_MAX){
        cout<<-1<<endl;
    }else{
    cout<<s<<endl;
    }
    return 0;
}
