#include <iostream>

using namespace std;

int main()
{
    long n;
    cin>>n;
    string op;
    int x;
    string flag;

    int s=-2e9,e=2e9;
    while(e>=s && n-->0){
        cin>>op>>x>>flag;
        if(op==">="&&flag=="Y"){
                //s=x;
                s=max(s,x);
            }
            else if(op==">="&&flag=="N"){
                    e=min(e,x-1);
                //e=x-1;
            }
            else if(op=="<="&&flag=="Y"){
                //e=x;
                e=min(e,x);
            }
            else if(op=="<="&&flag=="N"){
                if(s<x){
                    s=x+1;
                    }
            }
            else if(op=="<"&&flag=="Y"){
                e=min(e,x-1);
            }
            else if(op=="<"&&flag=="N"){
                //s=x;
                s=max(s,x);
            }
            else if(op==">"&&flag=="Y"){
                   s=max(s,x+1);
                //s=x+1;
            }
            else if(op==">"&&flag=="N"){
                //e=x;
            e=min(e,x);
            }

    }
    if(e<s){
        cout<<"Impossible"<<endl;
    }
    else{
    cout<<s<<endl;
    }


    return 0;
}
