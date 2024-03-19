#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,p,q,a;
   bool flage=1;
   cin>>n;
   int f[n+1]={};
   cin>>p;
   for(int i=0;i<p;i++){
      cin>>a;
      f[a]++;
   }
   cin>>q;
   for(int i=0;i<q;i++){
      cin>>a;
      f[a]++;
   }
    for(int i=1;i<=n;i++){
      if(f[i]==0) {
        flage=0;
        cout<<"Oh, my keyboard!"<<endl;
        break;
      }
    }
   if(flage==1){
    cout<<"I become the guy."<<endl;
   }

    return 0;
}
