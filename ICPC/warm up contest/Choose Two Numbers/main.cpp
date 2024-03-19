#include <iostream>

using namespace std;

int main()
{
 int n,m,num1,num2;
 cin>>n;
 int a[n];
 if(n>100){return 0;}
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 cin>>m;
 int b[m];
 if(m>100){return 0;}
 for(int i=0;i<m;i++){
    cin>>b[i];
 }
 num1=a[0];
 num2=b[0];
  for(int j=1;j<n;j++){
    if(num1>a[j]){continue;}
    else if(num1<a[j]){num1=a[j];}
  }
  for(int j=1;j<m;j++){
    if(num2>b[j]){continue;}
    else if(num2<b[j]){num2=b[j];}
  }

  cout<<num1<<" "<<num2;
    return 0;
}
