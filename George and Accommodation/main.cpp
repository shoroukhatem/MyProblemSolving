#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p,q;
    int c = 0;
    while(n-->0){
        cin>>p>>q;
        if(q-p>=2){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
