#include <iostream>

using namespace std;

int main()
{
    string s;
    cout<<"Ready"<<endl;
    while(getline(cin,s)){
    if(s[0]==' '&& s[1]==' '){
    break;
    }
    else if((s[0]=='p'&&s[1]=='q')||(s[1]=='p'&&s[0]=='q')){
    cout<<"Mirrored pair"<<endl;
    }
    else if((s[0]=='b'&&s[1]=='d')||(s[1]=='b'&&s[0]=='d')){cout<<"Mirrored pair"<<endl;}
    else if(s.size()==0){continue;}
    else{cout<<"Ordinary pair"<<endl;}

    }

    return 0;
}
