#include <iostream>

using namespace std;

int main()
{
    int n,c1=0,c2=0,c3=0,c4=0;
    string s;
    cin>>n;
    while(n>0){
     cin>>s;
     if(s=="AC"){
        c1++;
     }
     else if(s=="WA"){
       c2++;
     }
     else if(s=="TLE"){
       c3++;
     }
       else if(s=="RE"){
       c4++;
     }
        n--;
    }
    cout<<"AC"<<" x "<<c1<<endl;
    cout<<"WA"<<" x "<<c2<<endl;
    cout<<"TLE"<<" x "<<c3<<endl;
    cout<<"RE"<<" x "<<c4<<endl;
    return 0;
}
