#include <iostream>
#include <string>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t>0){
    string str;
    cin>>str;
   for(int i=1;i<str.length();i++){
        if(str[i]==str[i+1]){
            str.erase(i,1);
        }
   }
   cout<<str<<endl;
    t--;
   }
    return 0;
}
