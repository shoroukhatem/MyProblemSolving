#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int>arr(n);
   vector<int>freq(5001,0);
    for(int i=0;i<n;i++){
       cin>>arr[i];
       freq[arr[i]]++;
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(freq[i]==0){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
