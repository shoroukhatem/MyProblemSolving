#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str,new_str;
   cin>>str;

   for (int i=0;i<str.length();i=i+2){
    if(str[i]!='+'){
        new_str.push_back(str[i]);
    }
   }
   sort(new_str.begin(),new_str.end());

    cout<<new_str[0];
    for(int i=1;i<new_str.length();i++){
        cout<<"+"<<new_str[i];
    }
    return 0;
}
