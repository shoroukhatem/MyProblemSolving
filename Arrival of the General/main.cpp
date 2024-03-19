#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int Max=0;
    int Min=101;
    int MaxPos=0;
    int MinPos=0;
    for(int i=0;i<n;i++){
            int num;
        cin>>num;
    if(num>=Max){
        Max=num;
        MaxPos=i;
    }
    if(num<=Min){
        Min=num;
        MinPos=i;
    }
    }
    if(MaxPos>MinPos){
            cout<<(MaxPos-1)+(n- ++MinPos)<<endl;

    }
    else{
          cout<<(MaxPos-1)+(n-MinPos)<<endl;
    }


    return 0;
}
