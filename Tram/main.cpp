#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int out[n],in[n];
    for (int i=0;i<n;i++){
        cin>>out[i];
        cin>>in[i];
    }
    int Capacity=0;
    int Max=in[0];
    for (int i=0;i<n;i++){
        Capacity+=in[i];
        Capacity-=out[i];
        if(Capacity>Max){
            Max=Capacity;
        }
    }
    cout<<Max<<endl;
    return 0;
}
