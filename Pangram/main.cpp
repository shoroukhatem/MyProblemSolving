#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(n<26){
        cout<<"NO";
    }
    else{
     transform(str.begin(), str.end(), str.begin(), ::tolower);
    int letter = 'a';
     for(int i=0;i<26;i++){
            if(str.find(letter)!=-1){
                letter++;
            }
        else{
            cout<<"NO"<<endl;
            return 0;

        }
     }
         cout<<"YES"<<endl;
    }

    return 0;
}
