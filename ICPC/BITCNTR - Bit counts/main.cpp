#include <iostream>

using namespace std;

int main()
{
int a[10], n, i,t,c=0;
 cin>>t;
for(int j=0;j<t;j++){
cin>>n;
if(n>512) {break;}
for(i=0; n>0; i++)
{
a[i]=n%2;
n= n/2;
}
for(i=i-1 ;i>=0 ;i--)
{
   if(a[i]==1){c++;}
}
cout<<c<<endl;
c=0;
 }




    return 0;
}
