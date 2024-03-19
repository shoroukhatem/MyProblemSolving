#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    bool flag = true;
    for (int i=0, j=i+1;i<str.length(),j<str.length();i++,j++){
        if(str[i]!=str[j]){
            flag =false;
        }
    }
    if(flag){
        cout <<"Won"<<endl;
    }
    else{
        cout<<"Lost"<<endl;
    }
    return 0;
}
