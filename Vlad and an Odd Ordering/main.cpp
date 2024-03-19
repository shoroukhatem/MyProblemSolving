#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>vec;
    vector<long long>odd;
    for(long long i=1;i<=n;i++){
        if (i % 2 != 0) {
            vec.push_back(i);
            odd.push_back(i);
        }
    }
    for(long long i=1;i<=n;i++){
       for(long long j=0;j<odd.size();j++){
        if(i==(2*odd[j])){
             vec.push_back(i);
        }
       }
    }
     for(long long i=1;i<=n;i++){
       for(long long j=0;j<odd.size();j++){
        if(i==(3*odd[j])){
             vec.push_back(i);
        }
       }
    }
     for(long long i=1;i<=n;i++){
       for(long long j=0;j<odd.size();j++){
        if(i==(4*odd[j])){
             vec.push_back(i);
        }
       }
    }
    cout<<vec[k-1]<<endl;
   }
    return 0;
}
