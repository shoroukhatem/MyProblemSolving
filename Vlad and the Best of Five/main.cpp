#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        map<char,int>mp;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        int Max=0;
        char c;
        for(auto val :mp){
            if(Max<val.second){
                Max = val.second;
                c=val.first;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
