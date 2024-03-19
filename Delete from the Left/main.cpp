#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
   string s,t;
   cin>>s;
   cin>>t;
   stack<char>st1;
   stack<char>st2;
   for(int i=0;i<s.length();i++){
    st1.push(s[i]);
   }
   for(int i=0;i<t.length();i++){
    st2.push(t[i]);
   }
   while(!st1.empty() && !st2.empty()){
    if(st1.top()!=st2.top()){
        break;
           }
        st1.pop();
        st2.pop();
   }
   cout<<st1.size()+st2.size()<<endl;
    return 0;
}
