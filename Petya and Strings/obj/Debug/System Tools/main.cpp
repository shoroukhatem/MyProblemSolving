#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int k=0;k<s.size();k++){
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
              if(s[i]==s[j]){
                s.erase(i,1);
      }
    }
    }
    }

   if(s.size()%2==0){cout<<"CHAT WITH HER!";}
   else if (s.size()%2!=0){cout<<"IGNORE HIM!";}
   else{cout<<"ERROR";}


    return 0;
}
