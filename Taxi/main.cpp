#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
    cin>>n;
    vector<int>arr(n);
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            a++;
        }
        else if(arr[i]==2){
            b++;
        }
        else if(arr[i]==3){
            c++;
        }
        else if(arr[i]==4){
            d++;
        }
    }
    int t = 0;
    t+=d;
    t+=c;
    a=a-c;
    if(a<0) a=0;
    if(b%2==0){
        b/=2;
        t+=b;
    }
    else{
        b=(b/2)+1;
        t+=b;
        a=a-2;
        if(a<0)a=0;
    }
    a=ceil(a/4.0);
    t+=a;
    cout<<t<<endl;
    return 0;
}
