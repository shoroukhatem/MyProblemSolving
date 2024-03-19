
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string n;
    cin>>n;
    string m=n;
    reverse(n.begin(),n.end());
    if(n==m){
        cout<<"yes"<<endl;
    }
    else{
    int count=0;
      int k=m.length();
     for(int i=1; i<=k;i++){
         if(m[i]=='0'){
             count+=1;
         }
     }

 for(int i=1;i<=count;i++){
     m='0'+m;
 }
        string str = m;
        reverse(m.begin(),m.end());
    if(str==m){
        cout<<"yes"<<endl;
    }
    else{
       cout<<"no"<<endl;
    }

    }
    return 0;
}
