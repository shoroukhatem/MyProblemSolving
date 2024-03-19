#include <iostream>
#include <string>
#include <set>
#include <iterator>
using namespace std;
int main()
{
string str;
set <char> s;
int t;
char a;
cin>>t;
while (t>0){
cin>>str;
for(int i=0;i<str.size();i++){
    a=str[i];
  s.insert(a);
}
cout<<s.size()<<endl;
s.clear();
    t--;
}

return 0;
}
//the wrong code
/*int n;
string s;
cin>>n;
while(n>0){
cin>>s;
for(int i=0;i<s.size();i++){
  for(int j=i+1;j<s.size();j++){
   if(s[i]==s[j]){
    s.erase(j,1);
   }
  }
}
for(int i=0;i<s.size();i++){
  for(int j=i+1;j<s.size();j++){
   if(s[i]==s[j]){
    s.erase(j,1);
   }
  }
}
cout<<s.size()<<endl;
n--;
*/
