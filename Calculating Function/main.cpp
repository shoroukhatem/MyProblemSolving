#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long Fn=0;
    if(n%2==0){
        Fn=n/2;
    }
    else{
        Fn=((n+1)/2)*-1;
    }
    cout<<Fn;
    return 0;
}
