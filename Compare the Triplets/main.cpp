#include <iostream>

using namespace std;

int main()
{
    int n = 3;
    int a[n],b[n];
    int A=0;
    int B= 0 ;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        cin>>b[i];
    }
    for (int i=0;i<n;i++){
        if(a[i]>b[i]){
            A++;
        }
        else if(a[i]<b[i]){
            B++;
        }
    }
    cout<< A << " " << B;

    return 0;
}
