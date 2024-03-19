#include <iostream>
#include <set>
#include  <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
     getline(cin, str);
    set<char> st;
    for(int i=1;i<str.length()-1;i++){
        if(str[i] !=','&& str[i]!=' '){
            st.insert(str[i]);
        }
    }
    cout<<st.size()<<endl;
    return 0;
}
