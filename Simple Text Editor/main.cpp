#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int q;
    cin>>q;
    stack<pair<int,string>>op;
    while(q>0){
        int choice;
        cin>>choice;
    if(choice==1){
        string s;
        cin>>s;
        op.push({1,s});
        str +=s;
    }
    else if(choice==2){
    int num;
    cin>>num;
    int index=str.length()-num;
    string s = str.substr(index,num);
    op.push({2,s});
    str.erase(index,num);
    }
    else if(choice==3){
        int num ;
        cin>>num;
        cout<<str[num-1]<<endl;
    }
    else if(choice==4){
        pair <int,string>p =op.top();
        if(p.first==1){
            string s =p.second;
            int num = s.length();
            int index = str.length()-num;
            str.erase(index,num);
        }
        else if(p.first==2){
            str+=p.second;
        }
        op.pop();

    }
        q--;
    }
    return 0;
}
