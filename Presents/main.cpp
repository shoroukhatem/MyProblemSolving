#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n+1);
    vector<int>::iterator it;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        it = find(arr.begin(),arr.end(),i);
        if(it!=arr.end()){
           cout<<it-arr.begin()<<" ";
        }
    }
    return 0;
}
