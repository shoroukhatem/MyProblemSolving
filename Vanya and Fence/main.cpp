#include <iostream>

using namespace std;

int main()
{
    float h ;
    int n,sum=0,ai;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>ai;
        if(ai<=h){sum=sum+1;}
        else if(ai>h){sum=sum+2;}
    }
    cout<<sum;

    return 0;
}
