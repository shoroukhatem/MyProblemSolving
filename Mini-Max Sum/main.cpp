#include <iostream>
#include <limits.h>
#include <climits>
using namespace std;

int main()
{
   long long arr[5];
   for(int i=0;i<5;i++){
    cin>>arr[i];
   }
   long long sum=0;
   long long Max=LLONG_MIN;
   long long Min=LLONG_MAX;
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
    if(j!=i){
       sum+=arr[j];
    }
   }
   if(sum>Max){
    Max=sum;
   }
   if(sum<Min){
    Min=sum;
   }
     sum=0;

   }
   cout<<Min<<" "<<Max;
    return 0;
}
