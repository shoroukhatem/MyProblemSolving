#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    if(a.length()!=b.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
    string str1=a,str2=b;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(a==b){
            bool flage = false;
        for(int i=0;i<a.size()-1;i++){
            if(str1[i]==str1[i+1]){
                flage = true;
                break;
            }
        }
        if(flage == true){
            cout<<"YES"<<endl;
            return 0 ;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    else{
    vector<int>indx;
    if(str1==str2){
        int c = 0;
    for(int i=0;i<a.length()&&c<=2;i++){
         if(a[i]!=b[i]){
            c++;
            indx.push_back(i);
         }
    }
    swap(a[indx[0]],a[indx[1]]);
        if(a!=b){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    }



    return 0;
}
