#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        int coins = 0;
        int indx = str.length();
        for(int i=0;i<str.length()-1;i++){
            if(str[i]=='*' && str[i+1]=='*'){
                    indx = i;
                break;
            }

        }

         for(int i=0;i<=indx;i++){
            if(str[i]=='@'){
                coins++;
            }
         }
        cout<<coins<<endl;
    }
    return 0;
}
