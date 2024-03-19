#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int result,i=0,k=0;
    string x,y;
    cin>>x;
    cin>>y;
    for(int i=0;i<x.size();i++){
     if(x[i]<92){
        x[i]+=32;
     }
     if(y[i]<92){
        y[i]+=32;
     }
    }
    if(x>y){cout<<"1";}
    else if(x<y){cout<<"-1";}
    else if(x==y){cout<<"0";}
    else{cout<<"error";}

    return 0;
}
