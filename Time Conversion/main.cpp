#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t;
    cin>>t;
    int n =t.size();
    string con =t.substr(n-2, 1);
    if(con=="P"){
        string H=t.substr(0, 2);
        if(t.substr(0, 2)!="12"){
            int x =stoi(H);
        x+=12;
        H=to_string(x);
         if(H.size()==1){
            H.insert(0,1,'0');
        }
        }
        string result = H+t.substr(2,n-4);
        cout<<result;
    }
    else if(con=="A"){
        string H=t.substr(0, 2);
        if(t.substr(0, 2)=="12"){
        int x =stoi(H);
            x-=12;
        H=to_string(x);
        if(H.size()==1){
            H.insert(0,1,'0');
        }
        }
        string result = H+t.substr(2,n-4);
        cout<<result;
    }
    return 0;
}
