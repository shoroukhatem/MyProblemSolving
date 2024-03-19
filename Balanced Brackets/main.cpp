#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n>0){
    string s;
    cin>>s;
    stack <char> str;
    bool valid = true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            str.push(s[i]);
        }
        else{
             if(str.empty()){valid = false;}
             else if (s[i]=='}' && str.top()=='{'){
                 str.pop();
             }
             else if(s[i]==']' && str.top()=='['){str.pop();}
             else if (s[i]==')' && str.top()=='('){str.pop();}
             else valid = false;
        }

        }


     if(str.size()) valid = false;

        if(valid) cout << "YES\n";
        else cout << "NO\n";

         n--;

        }



    return 0;
}







