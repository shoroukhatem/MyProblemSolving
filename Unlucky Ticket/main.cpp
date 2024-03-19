#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string t;
int n;

int main()
{
    cin>>n;
    string res,l,r;
    cin>>t;
    l = t.substr(0, n);
    r = t.substr(n, n);
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());
    bool smaller=true,bigger =true;
    for(int i=0;i<n;i++){
        if(l[i]>=r[i]){
            smaller=false;
        }
    }
    for(int i=0;i<n;i++){
        if(l[i]<=r[i]){
            bigger=false;
        }
    }
    if(smaller || bigger){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
