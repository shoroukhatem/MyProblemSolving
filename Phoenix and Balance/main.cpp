#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int t,n,sum1,sum2=0;
cin>>t;
int ans[t];
int a=0;
while(a<t){
cin>>n;
if(n<2||n>30){return -1;}
int arr[n];
for(int i=1,j=0;i<=n&&j<n;i++,j++){
    arr[j]=pow(2,i);
}
sum1=arr[n-1];
for(int i=0;i<((n/2)-1);i++){
    sum1+=arr[i];
}
for(int i=((n/2)-1);i<n-1;i++){
    sum2+=arr[i];
}

ans[a]=abs(sum1-sum2);

sum1=0;
sum2=0;
a++;
}
for(int i=0;i<t;i++){ cout<<ans[i]<<endl;}
    return 0;
}
