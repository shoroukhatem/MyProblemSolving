#include <iostream>

using namespace std;

int main()
{
    int n ,k,mini,m=0;
    cin>>n>>k;
    if(n>1000||n<1||k>1000||k<1){return 0;}
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>1000||a[i]<1){return 0;}
    }
    mini=a[0];
     for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
        if(mini>a[j]){
           mini=a[j];
           a[j]=1001;}
        else if(mini<a[j]){
           continue;
        }

     }
     m=m+mini;
     mini=1002;
     }

     cout<<m;

    return 0;
}
